#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Lithuanian");
    char seka[] = "asefae"; // simboliu seka
    bool sudaro;
    int ilgis = sizeof(seka);
    for(int i = 0; i<ilgis-1; i++)
    {
        if(seka[i] == seka[0]) // tikriniams ar sekos simbolis lygus pirmam
        {
            sudaro = true;
        }
        else
        {
            sudaro = false;
            break;
        }
    }
    if (sudaro) // isvedimas
        cout << "Simboli� seka  sudaryta i� vienod� simboli�.";

    else
        cout << "Simboli� seka n�ra sudaryta i� vienod� simboli�.";




    return 0;

}
