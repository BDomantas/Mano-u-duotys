#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "U6.txt";
const char rez[] = "U6rez.txt";
void trik_tipas(int a, int b, int c);
bool trik_sudar(int a, int b, int c);
ifstream skaitymas (duomenys);
ofstream rasymas(rez);
int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int a, b, c, k;
    skaitymas >> k;
    for(int i=0; i<k; i++)
    {
        skaitymas >> a >> b >> c;
        if(trik_sudar(a, b, c))
        {
            rasymas << "Degtukas: " << a << " " << b << " " << c << endl;
            trik_tipas(a,b,c);
        }
        else
        {
            rasymas << "Degtukas: " << a << " " << b << " " << c << endl;
            rasymas << "- trikampio sudaryti negalima" << endl;
        }
    }
    skaitymas.close();
    rasymas.close();
    return 0;
}

void trik_tipas(int a, int b, int c)
{
    string l_kras = "- galima sudaryti lygiakra�t� trikamp�";
    string l_son = "- galima sudaryti lygia�on� trikamp�";
    string i_kras = "- galima sudaryti �vairiakra�t� trikamp�";
    if(a==b && a==c && c==b)
        rasymas << l_kras<< endl; // lygiakra�tis, nes visos kra�tin�s lygios

    if(a==b || a==c || c==b)
        rasymas <<  l_son << endl; //  lygia�onis, nes dvi kra�tin�s lygios

    else
        rasymas << i_kras << endl;// �vairiakra�tis, nes jis n�ra nei lygiakra�tis, nei lygia�onis.
}
bool trik_sudar(int a, int b, int c)
{
    if(a+b>c && c+b>a && c+a>b)// ar galima sudaryti trikamp� tikrinama pagal trikampio nelygyb�s po�ym�
        return true;
    else
        return false;
}

