#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>
using namespace std;

int main(){
setlocale(LC_ALL, "Lithuanian");

int m, n;

cout << "Įveskite nuo kurio bilieto m prasidės tikrimas" << endl;
cin>>m;
cout <<"Įveskite ties kuriuo bilietu n baigsisi tikrinimas" << endl;
cin>>n;

int pi, an, tr, ke, pe, se, kiek=0;

for(m;m<=n;m++){

pi= m/100000%10; // skaidoma i skaitmenis
an=m/10000%10;
tr=m/1000%10;
ke=m/100%10;
pe=m/10%10;
se=m%10;

if(pi==ke && an==pe && tr==se)// tikrinimas ar skaiciu trejetai sutampa
kiek++;





}
cout << "Laimingus bilietus įsigijo k = "<<kiek<<" keleivių." << endl;













return 0;
}
