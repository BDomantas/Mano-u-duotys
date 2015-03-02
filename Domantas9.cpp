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
    string l_kras = "- galima sudaryti lygiakraðtá trikampá";
    string l_son = "- galima sudaryti lygiaðoná trikampá";
    string i_kras = "- galima sudaryti ávairiakraðtá trikampá";
    if(a==b && a==c && c==b)
        rasymas << l_kras<< endl; // lygiakraðtis, nes visos kraðtinës lygios

    if(a==b || a==c || c==b)
        rasymas <<  l_son << endl; //  lygiaðonis, nes dvi kraðtinës lygios

    else
        rasymas << i_kras << endl;// ávairiakraðtis, nes jis nëra nei lygiakraðtis, nei lygiaðonis.
}
bool trik_sudar(int a, int b, int c)
{
    if(a+b>c && c+b>a && c+a>b)// ar galima sudaryti trikampá tikrinama pagal trikampio nelygybës poþymá
        return true;
    else
        return false;
}

