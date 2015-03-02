#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;
bool tikrinimas(int n);

int main()
{

    setlocale(LC_ALL, "Lithuanian");


    int n;
    cout << "Iveskite skaiciu n" << endl;
    cin >> n;

    if (tikrinimas(n))
        {

            cout << " duotas skaicius n yra tobulas." << endl;

        }
    else
        {
            cout << " duotas skaicius n netobulas." << endl;
        }





}

bool tikrinimas(int n)
{
    int suma=0;
    bool tikrinimas;

    for(int i = 1; i<n; i++) // i<n - si vieta pagal salyga "daliklių mažesnių už jį patį"
        {

            if(n%i==0) // tikrinimas ar skaicius yra daliklis
                {
                    suma +=i; // jei taip tokius daliklius sudeti
                }

        }
    tikrinimas=suma==n;// tikrinimas ar dalikliu suma lygi pradiniam n skaiciui

    return tikrinimas;
}
