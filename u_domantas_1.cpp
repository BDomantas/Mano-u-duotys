#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

const char duomenys[] = "U4.txt";
const char rez[] = "Rezultatai.txt";

using namespace std;

int main(){
ifstream skaitymas (duomenys);
ofstream rasymas (rez);
int numeris, sk, kiek=0, sum=0, vk=0, vd=0, vidk, vidd, kd=0, kk=0;
while(!skaitymas.eof()){
    skaitymas >> numeris >> sk;
    sum +=sk;

    if(numeris%2!=0){
        vk += sk;
        kk++;
    }



    kiek++;
}
vd=sum-vk;
kd=kiek-kk;

vidk=vk/kk;
vidd=vd/kd;

rasymas << "Gatvëje yra " << kiek << " namai." << endl;
rasymas << "Is viso gatveje gyvena " << sum << " gyventojai." << endl;
rasymas << "Kairëje pusëje gyvena " << vk << " gyventojai, desineje puseje " << vd << " gyventojai." << endl;
rasymas << "Vidutiniskai kairioje gatves puses gyvena " << vidk << " gyventojai, o desineje " << vidd << endl;

return 0;
}
