#include <iostream>
#include <locale>
#include <fstream>
#include <algorithm>
using namespace std;
const char duomenys[] = "u1.txt";
const char rez[] = "Rezultatai.txt";
int main()
{
    setlocale(LC_ALL,"Lithuanian");
    ifstream skaitymas (duomenys);
    ofstream rasymas (rez);
    const int MAX = 9999;
    struct vaik
    {
        int metai;
        string vardas;
        string pavarde;
    };
    vaik vaikai[MAX];
    vaik tarp;
    int n = 0, isd[MAX], i=0;
    while(!skaitymas.eof())
    {
        skaitymas >> vaikai[n].vardas >> vaikai[n].pavarde >> vaikai[n].metai;
        vaikai[n].metai = 2014-vaikai[n].metai;
        n++;
    }
    for (i; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (vaikai[i].metai>vaikai[j].metai)
            {
                 tarp = vaikai[i];
                 vaikai[i]= vaikai[j];
                 vaikai[j]=tarp;
            }
        }
    }
    for(int z = 0; z<n; z++)
    {
        rasymas << vaikai[z].vardas << "  " << vaikai[z].pavarde << "  " << vaikai[z].metai << endl;

    }



    return 0;
}
