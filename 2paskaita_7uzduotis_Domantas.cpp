#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int b, c, alfa;
    double a;

    cout << "áveskite kraðtinæ b kraðtinæ c ir kampà tarp jø " << endl;
    cin >> b >> c >> alfa;

    a= sqrt((b*b+c*c)- ((2*b*c)*cos(alfa * 3.14159265 / 180.0))); // parasiau formule pagal http://www.mathsisfun.com/algebra/trig-solving-sas-triangles.html pavyzdi

    cout << "Trikampio kraðtinë a = " ;
    cout << fixed << setprecision(2) <<a << endl;

    return 0;
}
