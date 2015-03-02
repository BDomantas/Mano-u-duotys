#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main(){

setlocale(LC_ALL, "Lithuanian");

int m, n, kelintas=1;
cout << "Įveskite pirmąjį naturalūjį skaičių n" << endl;
cin >> n;
cout << "Įveskite antrąjį naturalūjį skaičių m" << endl;
cin >> m;

/*

while(kelintas<=m && kelintas<=n){ // mano variantas be euklido algoritmo
if(m%kelintas==0 && n%kelintas==0){
dal=kelintas;
kelintas++;
}
if(m%kelintas!=0 || n%kelintas!=0){
kelintas++;
}

}
*/


while(n!=m){ // euklido algoritmas

if(n>m)
n-=m;

else{
m -=n;
}

}

cout << "Didžiausias bendras daliklis dbd= " << n;

return 0;
}
