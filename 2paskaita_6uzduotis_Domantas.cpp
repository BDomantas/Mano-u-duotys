#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int a, men, dien, val;
    const int dienos_metuose = 365;

    cout << "įveskite Miko metus" << endl ;
    cin >> a;

    men = a * 12;
    dien = a * dienos_metuose;
    val = dien * 24;

    cout <<" Mėnesiai: " <<men << endl << " dienos: " << dien <<  endl<< " valandos: " << val << endl;

    return 0;
}
