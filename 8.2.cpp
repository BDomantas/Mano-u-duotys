#include <iostream>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "U2.txt";
const char rez[] = "Rezultatai.txt";
int main()
{

  setlocale (LC_ALL, "Lithuanian");
ifstream skaitymas(duomenys);
ofstream rasymas(rez);

int k, m=0;

skaitymas >> k;
int x[50], y[50];
int x1[50], y1[50];

for (int i=0; i<k; i++){
skaitymas >> x[i] >> y[i]; // surasomos visos koordinates i masyva

if(x[i]==0 || y[i]==0){
    x1[m]=x[i], y1[m]=y[i]; // jeigu kerta asi irasyti i kita masyva;
    m++;
}
}

rasymas << "----------" << endl;
rasymas << "  X    Y  " << endl;
rasymas << "----------" << endl;
for(int g=0; g<m; g++){ // spausdinimas
    rasymas << x1[g] << "      ";
    rasymas << y1[g] << endl;
}

  return 0;
}
