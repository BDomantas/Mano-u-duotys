#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;
bool armstrongo_sk(int n);


int main()
{

    setlocale(LC_ALL, "Lithuanian");

    int n;
    cout << "iveskite trizenkli skaiciu." << endl;
    cin >> n;

    if(armstrongo_sk(n))
        {

            cout << "Skaicius " << n << " yra Armstrongo skaicius.";
        }
    else
        {

            cout << "Skaicius " << n << " nera Armstrongo skaicius.";
        }





}

bool armstrongo_sk(int n)
{

    int p_sk, a_sk, t_sk;
    bool tikrinimas;

    p_sk=n/100;
    a_sk=n/10%10;
    t_sk=n%10;

    tikrinimas=p_sk*p_sk*p_sk+a_sk*a_sk*a_sk+t_sk*t_sk*t_sk==n;
    return tikrinimas;
}
