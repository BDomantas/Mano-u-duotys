#include <iostream>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "Prekes.txt";
const char duomenys1[] = "Tiekejai.txt";
const char rez[] = "Rezultatai1.txt";

int main()
{
  setlocale (LC_ALL, "Lithuanian");


ifstream skaitymas(duomenys);
ifstream skaitymas1(duomenys1);
ofstream rasymas(rez);

int n, A[50], B[50];
skaitymas >> n;

for(int i=0; i<n; i++){ //nuskaitymas is duomenu failo prekes i masyva A ar ir is tiekejai failo i masyva B
skaitymas >> A[i];
skaitymas1 >> B[i];
rasymas << A[i]+B[i] << endl; // sudedamos reiksmes
}

  return 0;
}
