#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "Moksleiviai.txt";
const char rez[] = "Vidurkiai.txt";
int main(){
setlocale(LC_ALL, "Lithuanian");
ifstream skaitymas(duomenys);
ofstream rasymas(rez);

int k, kiek=0, paz=0; float p, sum=0, vid;
skaitymas >> k;

for(int i = 0; i<k;i++){

    while(paz<5){
    skaitymas >> p;
    sum +=p;
    kiek++;
    paz++;
    }
paz=0;
vid=sum/kiek;
kiek=0;
sum=0;
rasymas << i+1 << " " << fixed << setprecision(2) << vid << endl;
}















return 0;
}
