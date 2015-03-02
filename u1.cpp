#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "U1.txt";
const char rez[] = "U1rez.txt";
int main(){
setlocale(LC_ALL, "Lithuanian");

ifstream skaitymas (duomenys);
ofstream rasymas(rez);
int k;

skaitymas >> k;
float A[k], sum=0, didz=0, maz=10, vid; // maz - 10, nes maksimalus galimas pazymys yra 10.

for(int i=0; i<k;i++){ // duomenu skaitymas i masyva.
skaitymas >> A[i];
sum +=A[i];
}

vid=sum/k;

for(int j=0; j<k;j++){ // geriausiai besimokancio mokinio ir prasciausiai eil. nr ieskojimas.
if(A[j]>didz){
didz=j+1;
}
if(A[j]<maz){
maz=j+1;
}


}
rasymas << "Klasës mokiniø paþangumas " << vid << endl;
rasymas << "Geriausiai mokosi "<<didz << " mokinys"<<  endl;
rasymas <<"Blogiausiai mokosi " <<maz <<" mokinys" <<endl;












return 0;
}
