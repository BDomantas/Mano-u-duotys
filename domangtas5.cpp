#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Lithuanian");

    float a, b , c, d,x1, x2;

    cout << "Áveskite koeficientus a, b ir c" << endl;
    cin >> a >> b >> c;
    d=b*b-4*a*c;

    if(d<0)
    {
        cout <<"Lygties iðskaidyti negalima." << endl;
    }
    else if(d>=0)
    {
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);

        if(a==1)
        {
            if(x1>0 && x2>0)
            cout <<fixed<<setprecision(2)<< "(x-"<<x1<<")(x-"<<x2<<")" << endl;
            if(x1<0 && x2>0)
            cout <<fixed<<setprecision(2)<< "(x+"<<-1*x1<<")(x-"<<x2<<")" << endl;
            if(x1>0 && x2<0)
            cout <<fixed<<setprecision(2)<< "(x+"<<-1*x1<<")(x-"<<-1*x2<<")" << endl;
            if(x1<0 && x2<0)
            cout <<fixed<<setprecision(2)<< "(x+"<<-1*x1<<")(x+"<<-1*x2<<")" << endl;
        }
        if(a!=1)
        {
            if(x1>0 && x2>0)
            cout <<fixed<< setprecision(2)<<a<<"(x-"<< x1<<")(x-"<<x2<<")" << endl;
            if(x1<0 && x2>0)
            cout <<fixed<< setprecision(2)<<a<<"(x+"<<-1*x1<<")(x-"<<x2<<")" << endl;
            if(x1>0 && x2<0)
            cout <<fixed<< setprecision(2)<<a<<"(x-"<< x1<<")(x+"<<-1*x2<<")" << endl;
            if(x1<0 && x2<0)
            cout <<fixed<< setprecision(2)<<a<<"(x+"<< -1*x1<<")(x+"<<-1*x2<<")" << endl;

        }

    }





    return 0;
}
