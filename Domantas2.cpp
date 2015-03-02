#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
int skait_sum(int x);

using namespace std;
int main(){
setlocale(LC_ALL, "Lithuanian");
int n, m;
cout << "Įveskite betkokius natūraliuosius skaičius m ir n" << endl;
cin >>n >> m;

cout << "m ir n skaitmenų suma yra "<<skait_sum(n) + skait_sum(m);



return 0;
}
int skait_sum(int x){
int sk, visas ,sum=0;
sk=x%10; // randamas pirmas skaiciaus skaitmuo nuo galo
visas=x/10; // rastas skaitmuo panaikinamas nuo viso skaiciaus
if(x!=0) //jeigu skaicius nelygus nuliui
return sum=sk+skait_sum(visas); // prideti rasta skaitmeni sk su nauju funkcijos rezultatu
else // grazinti suma
return sum;
}
