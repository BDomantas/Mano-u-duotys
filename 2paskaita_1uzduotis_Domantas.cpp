
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int s, g, k, viso;

    cout << "�veskite saik� gor�i� ir kvort� kiekius " << endl;
    cin >> s >> g >> k;
    cout <<"Pradin�s vert�s "<< "saikai: " << s << " gor�iai " << g << " kvortos " << k << endl;

   viso=(s*24)+(g*4)+k+1; // viskas paver�iama � kvortas

    s=viso/24; // skai�iuojamas t�ris

    viso = viso%24;

    g=viso/4;

    k=viso%4;

    cout << s << "- saikai " << g << "- gor�iai " << k << "- kvortos " << endl;

    return 0;
}
