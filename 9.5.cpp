#include <iostream>
#include <locale>
#include <fstream>
#include <iomanip>
using namespace std;
const char duomenys[] = "u5.txt";
const char rez[] = "rezultatai.txt";
int main()
{
    setlocale(LC_ALL,"Lithuanian");
    ifstream skaitymas (duomenys);
    ofstream rasymas (rez);
    string vardas;
    char raide;
    cout << "Áveskite raidæ" << endl;
    cin >> raide;
    rasymas << "Pasirinkta raidë " << raide << endl;
    rasymas << "Mokiniø vardø, prasidedanèiø raide " << raide << " sàraðas: "<<endl;
    int ilgis, kiek=0, kiekb=0;
    float vidm, vidb, summ=0, sumb=0, ugis;
    while(!skaitymas.eof())
    {
        skaitymas >> vardas >> ugis;

        ilgis = vardas.size(); // gaunamas varda sudaranciu simboliu kiekis
        if(vardas[0] == raide) // tikrinimas ar pirmoji raide yra tokia pat kaip ivesta
        {
            rasymas << vardas << endl;
        }
        if(vardas[ilgis-1] == 's') // tikrinamas ar vardas baigiasi raide s
        {
            sumb += ugis;
            kiekb++;
        }
        else
        {
            summ += ugis;
            kiek++;
        }
    }
    vidb = sumb/kiekb; // vidurkiu skaiciavimas
    vidm = summ / kiek;
rasymas << "Berniukø  vidutinis ûgis: " << setprecision(2) << fixed <<vidb<<endl;
rasymas << "Mergaièiø vidutinis ûgis: " << setprecision(2) << fixed <<vidm<<endl;

    return 0;
}
