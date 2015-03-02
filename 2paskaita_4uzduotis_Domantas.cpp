#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    setlocale (LC_ALL, "Lithuanian");



    int a;
    double h, s;

    cout << "áveskite kraðtinæ a" << endl;
    cin >> a;

    h=sqrt(3.0)/2 * a;

    s= h*h/sqrt(3.0);
    cout << "Lygiakrasèio trikampio plotas yra  " ;
    cout << fixed <<setprecision(2) <<s;








    return 0;
}
