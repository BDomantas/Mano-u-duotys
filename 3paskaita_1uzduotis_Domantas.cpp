#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;
float trik_plotas(float a, float b, float c);

int main()
{
    setlocale(LC_ALL, "Lithuanian");
    float a,b,c;

    cout << "áveskite tris trikampio kraðtines" << endl;
    cin >> a >>b >>c;
    cout << "Trikampio plotas = "<<fixed<<setprecision(2) <<trik_plotas(a,b,c) << endl;

    return 0;
}

float trik_plotas(float a, float b, float c)
{
    float p = (a+b+c)/2; // naudojau herono formule pagal http://www.mathopenref.com/heronsformula.html

    return sqrt(p*(p-a)*(p-b)*(p-c));
}
