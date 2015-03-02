#include <iostream>
#include <locale>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;
const char duomenys[] = "Poezija.txt";
const char rez[] = "PoezijaRez.txt";
const int MAX = 9999;
int main()
{
    setlocale(LC_ALL,"Lithuanian");
    ifstream skaitymas (duomenys);
    ofstream rasymas (rez);

    int eil[MAX], n=0;
    string eilute[MAX];
    int senas = 0, didz, nr;

    while(!skaitymas.eof())
    {
        getline(skaitymas, eilute[n]);
        eil[n] = eilute[n].length();
        n++;
    }
    for(int i = 0; i<n-1; i++)
    {
        if(eil[i]>senas)
        {
            didz = eil[i];
            senas = eil[i];
            nr = i;
        }
    }

    char eilu[eil[nr]];
    strcpy(eilu, eilute[nr].c_str());

    for(int j = 0; j<eil[nr]; j++)
    {
        if(eilu[j] == 'a' ||  eilu[j] == 'A' || eilu[j] == 'e' || eilu[j] == 'E'|| eilu[j] == 'i'|| eilu[j] == 'I'|| eilu[j] == 'o'||
                eilu[j] == 'O'|| eilu[j] == 'u'|| eilu[j] == 'U'|| eilu[j] == 'A')
        {
            eilu[j] = '*';
        }
    }
    string pataisyta(eilu);


    for(int g = 0; g<n; g++)
    {
        if(g == nr)
        {
            rasymas << pataisyta <<endl;

        }
        else
        {
            rasymas << eilute[g] << endl;
        }

    }
    return 0;
}
