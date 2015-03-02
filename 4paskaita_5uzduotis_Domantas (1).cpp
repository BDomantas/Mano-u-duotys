#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;
bool tikrinimas( int y, int y1);

int main(){

setlocale(LC_ALL, "Lithuanian");



int q, t, r ,s;
cout << "Iveskite atkarpos A(q,t) B(r,s) koordinates" << endl;
cout << "q = "; cin >> q;
cout << endl <<"t = "; cin >> t;
cout << endl <<"r = "; cin >> r;
cout << endl <<"s = "; cin >> s;

if(tikrinimas(t,s))
    cout << "AB atkarpa kerta x asi" << endl;
else
    cout << "AB atkarpa nekerta x asies" << endl;



}

bool tikrinimas( int y, int y1){



if(y<0 && y1>0 || y>0 && y1<0)
    return true;

else
    return false;



}
