#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main(){
setlocale(LC_ALL, "Lithuanian");

int p, m, d, n=1, prad, trig;

cout << "Įveskite metinę palūkanų normą %" << endl;
cin >> p;
cout << "Įveskite pradinį indėlį d" << endl;
cin >> d;
prad=d;
trig=d*2; // padauginta iš 2, nes prad suma įsiskaito kaip vienas kartas.
m=(d/100)*p; // palūkanų vertė nuo indėlio
while(d<=trig){
d=d+m; // pridedama metinės palūkanos kas vieni metai
//cout << d << endl;
n++;
}
cout << "kai pradinis indėlis d = "<<prad<<", o palūkanų norma "<<p<<"% indėlis patrigubės po "<<n<<" metų." << endl;






return 0;
}
