#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;
void spausdinti_stac();
void tikrinimas(int x1, int y1, int x2, int y2, int xp, int yp);
int main()
{

    setlocale(LC_ALL, "Lithuanian");


    int x1, y1, x2, y2, xp, yp;
    spausdinti_stac();

    cout << "Iveskite koordinates. x1, y1, x2, y2, xp, yp" << endl;

    cin >> x1 >> y1 >> x2 >> y2 >> xp >> yp;

    tikrinimas(x1,  y1,  x2,  y2,  xp,  yp);








}

void spausdinti_stac()
{



    cout << " x1, y1                         x3, y3" << endl;
    cout << "   |-------------------------------|" << endl;
    cout << "   |                               |" << endl;
    cout << "   |                               |" << endl;
    cout << "   |                               |" << endl;
    cout << "   |                               |" << endl;
    cout << "   |-------------------------------|" << endl;
    cout << " x4, y4                         x2, y2" << endl << endl << endl;



}

void tikrinimas(int x1, int y1, int x2, int y2, int xp, int yp)
{

    int x4 = x1,
             y4 = y2,
                  x3 = x2,
                       y3 = y1;

    if(xp>x1 && xp<x2 && yp<y1 && yp>y2)
        cout << "Taskas P yra staciakampio viduje" << endl;

    if( xp < x1 || xp > x2 || yp > y1 || yp < y2 )
        cout << "Taskas P yra staèiakampio iðorëje" << endl;

    if(xp==x1 && yp==y1)
    {
        cout << "koordinate P yra kairiajame virsutiniame kampe" << endl;
    }
    else if(xp==x2 && yp==y2)
    {
        cout << "koordinate P yra desniajame apatiniame kampe" << endl;
    }
    else if(xp==x3 && yp==y3)
    {
        cout << "koordinate P yra desiniajame virsutiniame kampe" << endl;
    }
    else if(xp==x4 && yp==y4)
    {
        cout << "koordinate P yra kairiajame apatiniame kampe" << endl;
    }


    if(xp>x4 && xp<x2 && yp == y2)
    {
        cout << "taskas P yra x4, y4 - x2, y2 krastineje" << endl;
    }
    else if(xp>x4 && xp<x2 && yp == y1)
    {
        cout << "taskas P yra x1, y1 - x3, y3 krastineje" << endl;
    }
    else if(yp>y4 && yp<y1 && xp == x1)
    {
        cout << "taskas P yra x4, y4 - x1, y1 krastineje" << endl;
    }
    else if(yp>y2 && yp<y3 && xp == x2)
    {
        cout << "taskas P yra x2, y2 - x3, y3 krastineje" << endl;
    }

}

