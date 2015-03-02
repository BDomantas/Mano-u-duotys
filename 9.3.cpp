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
        cout << "Simboliø seka  sudaryta ið vienodø simboliø.";

    else
        cout << "Simboliø seka nëra sudaryta ið vienodø simboliø.";




    return 0;

}
