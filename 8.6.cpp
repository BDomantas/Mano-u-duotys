#include <iostream>
#include <locale>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
const char duomenys[] = "u6.txt";
const char rez[] = "rezultatai.txt";
int main()
{
  setlocale(LC_ALL,"Lithuanian");
    ifstream skaitymas (duomenys);
    ofstream rasymas (rez);
    const int MAX = 999;

int x[MAX], y[MAX], n = 0;
float ilgis, didz, maz, send=0, senm=99999;

int kordx, kordx1, kordy, kordy1, kordxm, kordx1m, kordym, kordy1m;

while(!skaitymas.eof()){ // irasymo i masyvus ciklas
skaitymas >> x[n] >> y[n];
n++;

}
for (int i =0; i<n-1; i++){
ilgis=sqrt(((x[i]-x[i+1])*(x[i]-x[i+1]))+((y[i]-y[i+1])*(y[i]-y[i+1])));
if(ilgis>send){
didz = ilgis;
send = ilgis;
kordx = x[i];
kordx1 = x[i+1];
kordy = y[i];
kordy1 = y[i+1];

}
if(ilgis < senm){
maz = ilgis;
senm = ilgis;
kordxm = x[i];
kordx1m = x[i+1];
kordym = y[i];
kordy1m = y[i+1];
}
}

rasymas << "Ilgiausios atkarpos koordinatës ilgis " << "("<< kordx << "; "<<kordy << ") ir (" << kordx1 << "; " << kordy1 << ") ilgis  "<< setprecision(2) << fixed << didz << endl;
rasymas << "Trumpiausios atkarpos koordinatës ilgis " << "("<< kordxm << "; "<<kordym << ") ir (" << kordx1m << "; " << kordy1m << "), ilgis " << setprecision(2) << fixed << maz << endl;

  return 0;
}
