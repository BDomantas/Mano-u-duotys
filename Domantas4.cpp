#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
bool vnd_skait(int x);
int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int a, b, c;
    cout << "Įveskite tris sveikuosius skaičius a, b ir c" << endl;
    cin >> a >> b >> c;

    if(vnd_skait(a) && vnd_skait(b) && vnd_skait(c)){
        cout << "Visi skaičiai sudaryti iš vienodų skaitmenų";
    }
    else if(vnd_skait(a)==false && vnd_skait(b)==false && vnd_skait(c)==false){
    cout << "Nėra skaičiaus sudaryto iš vienodų skaitmenų.";
    }

    else{

    if(vnd_skait(a))
    {
        cout << "Skaičius a sudarytas iš vienodų skaitmenų,";
    }
    else
    {
        cout << "Skaičius a nesudarytas iš vienodų skaitmenų,";
    }
      if(vnd_skait(b))
    {
        cout << " skaičius b sudarytas iš vienodų skaitmenų,";
    }
    else
    {
        cout << " skaičius b nesudarytas iš vienodų skaitmenų,";
    }
      if(vnd_skait(c))
    {
        cout << " skaičius c sudarytas iš vienodų skaitmenų.";
    }
    else
    {
        cout << " skaičius c nesudarytas iš vienodų skaitmenų.";
    }
    }


    return 0;
}

bool vnd_skait(int x)
{
    int sk = 0, sk1=0;
    sk=x%10;
    x=x/10;
    sk1=x%10;
    x=x/10;
    bool tikr=false;
    while(x!=0 && sk1==sk)
    {
        if(sk==sk1)
        {
            sk=x%10;
            x=x/10;
            sk1=x%10;
            x=x/10;
            tikr = true;
        }

        if(sk!=sk1)
        {
            break;
            tikr = false;
        }
    }
    return tikr;
}
