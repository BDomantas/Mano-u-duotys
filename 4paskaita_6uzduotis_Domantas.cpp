#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;

bool ar_olimp (int m);
int zaid_nr (int m);
const int pm = 1896; // paèiø pirmûjø olimpiniø þaidyniø metai

int main(){
    setlocale(LC_ALL, "Lithuanian"); int m;

    cout << "áveskite olimpiniø þaidyniø metus" << endl;
    cin >> m;

    if(ar_olimp(m))
        cout << "Olimpiniø þaidyniø " << m << " metais numeris - " << zaid_nr(m) << endl;
    else
        cout << "Metai neolimpiniai" << endl;
}

int zaid_nr (int m)
{
    return ((m-pm)/4)+1; // surandamas olimpiniø þaidyniø numeris. Vienas pridedamas, nes pirmosios þaidynes irgi ásiskaito
}

bool ar_olimp (int m)
{
    if(m%4 != 0 || m<pm) // Tikrinimas ar metai olimpiniai
        return false;
    else
        return true;
}
