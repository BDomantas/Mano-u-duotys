#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Lithuanian");
    char seka[] = "Sveiki visi Lietuvos pilieèiai, jau 3 kartà ið eilës.";
    int ilgis = sizeof(seka);
    int k_d=0, k_m=0, k_s=0, k_skyr=0;
    for(int i = 0; i<ilgis; i++)
    {
        for(char d = 'A'; d<='Z'; d++)
        {
            if(seka[i]==d)
                k_d++;
        }
        for(char j = 'a'; j<='z'; j++)
        {
            if(seka[i]==j)
                k_m++;
        }
        for(char z = '0'; z<='9'; z++)
        {
            if(seka[i]==z)
                k_s++;
        }
        if(seka[i]== ' ' || seka[i]== ','  || seka[i]== '.' )
            k_skyr++;
        if(seka[i]== 'à' || seka[i]== 'è' || seka[i]== 'æ'|| seka[i]== 'ë'|| seka[i]== 'á'||
            seka[i]== 'ð'|| seka[i]== 'ø'|| seka[i]== 'û'|| seka[i]== 'þ')
            k_m++;
        if(seka[i]== 'À' || seka[i]== 'È' || seka[i]== 'Æ'|| seka[i]== 'Ë'|| seka[i]== 'Á'||
            seka[i]== 'Ð'|| seka[i]== 'Ø'|| seka[i]== 'Û'|| seka[i]== 'Þ')
            k_d++;
    }
    cout << "Didþiøjø raidþiø yra: " << k_d << endl;
    cout << "Maþøjø raidþiø yra: " << k_m << endl;
    cout << "Skaitmenø yra: " << k_s << endl;
    cout << "Skyrikliø yra: " << k_skyr << endl;
    return 0;
}
