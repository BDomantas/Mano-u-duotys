#include <iostream>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "U2.txt";
const char rezultatas[]  = "U2rez.txt";
int main()
{
    setlocale (LC_ALL, "Lithuanian");
    ifstream  skaitymas(duomenys);
    ifstream  skaitymas1(duomenys);
    ofstream rasymas(rezultatas);
    float p, kiek =0,kiek1 =0, sum=0, k, vid ,tik;
    skaitymas >> k;
    for(int i = 0; i<k; i++)  // skaiciuojamas vidurkis
    {
        skaitymas >> p;
        sum+=p;
        kiek++;
    }
    vid=sum/kiek;
    rasymas <<"Ávertinimø vidurkis: "<< vid << endl;
    skaitymas1 >> k;
    for(int i = 0; i<k; i++)  // tikrininama kiek mokiniu mokosi auksciau vidurkio
    {
        skaitymas1 >> tik;
        if(tik>vid)
            kiek1++;
    }
    rasymas <<"Aukðèiau vidurkio mokosi "<< kiek1 << " mokinys"<<endl;
    return 0;
}
