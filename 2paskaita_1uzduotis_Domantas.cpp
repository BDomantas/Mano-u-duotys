
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int s, g, k, viso;

    cout << "Áveskite saikø gorèiø ir kvortø kiekius " << endl;
    cin >> s >> g >> k;
    cout <<"Pradinës vertës "<< "saikai: " << s << " gorèiai " << g << " kvortos " << k << endl;

   viso=(s*24)+(g*4)+k+1; // viskas paverèiama á kvortas

    s=viso/24; // skaièiuojamas tûris

    viso = viso%24;

    g=viso/4;

    k=viso%4;

    cout << s << "- saikai " << g << "- gorèiai " << k << "- kvortos " << endl;

    return 0;
}
