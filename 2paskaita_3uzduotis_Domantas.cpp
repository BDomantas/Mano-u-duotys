#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

setlocale(LC_ALL, "Lithuanian");

    int h, m,s,h1,m1,s1, viso, viso1, skirtumas;

    cout << "Iveskite laikrodzio rodoma laika kai mokinys pradejo rasyt kontrolini." << endl << " Valandas, minutes, sekundes. " << endl;
    cin >> h >> m >> s;

    cout << "Iveskite laikrodzio rodoma laika kai mokinys baige rasyt kontrolini." << endl << " Valandas, minutes, sekundes " << endl;
    cin >> h1 >> m1 >> s1;

    viso = h*60*60+m*60+s; // pavertimas i sekundes
    viso1= h1*60*60+m1*60+s1;
    skirtumas=viso1-viso; // is pabaigos laiko(sekundem) atimamas pradzioj laikas(sekundem)

    h = skirtumas / 3600; // sekundziu vertimas i valandas, minutes sekundes
    skirtumas -= h*3600;
    m = skirtumas/60;
    s = skirtumas-m*60;
    cout << "Mokinys kontrolini rase " << h%24 << " valandas ";
     cout <<  m << " minutes ir ";
     cout <<  s << " sekundes " << endl;
}
