#include <iostream> //Ðá kart visi nustatymai su koduote nustatyti tinkami t.y. windows-1257, taèiau vistiek nerodomi lietuviðki simboliai.
#include <locale>
#include <fstream>
#include <iomanip>
using namespace std;
const char duomenys[] = "U3.txt";
const char rezultatas[]  = "U3rez.txt";
int main()
{
    setlocale (LC_ALL, "Lithuanian");
    ifstream  skaitymas(duomenys);
    ifstream  skaitymas1(duomenys);
    ofstream rasymas(rezultatas);
    float p, kiek =0, sum=0, vid ,tik;
    int kiek1=0;
    while(!skaitymas.eof())  // skaiciuojamas vidurkis
    {
        skaitymas >> p;
        sum+=p;
        kiek++;
    }
    vid=sum/kiek;
    rasymas <<"ávertinimo vidurkis: "<< fixed<<setprecision(2)<<vid << endl;
    while(!skaitymas1.eof())  // tikrininama kiek mokiniu mokosi auksciau vidurkio
    {
        skaitymas1 >> tik;
        if(tik>vid)
            kiek1++;
    }
    rasymas <<"Aukðèiau vidurkio mokosi "<< kiek1 << " mokinys"<<endl;
    return 0;
}
