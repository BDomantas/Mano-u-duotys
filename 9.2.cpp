#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Lithuanian");
    char seka[] = "Sveiki visi Lietuvos pilie�iai, jau 3 kart� i� eil�s.";
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
        if(seka[i]== '�' || seka[i]== '�' || seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�'||
            seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�')
            k_m++;
        if(seka[i]== '�' || seka[i]== '�' || seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�'||
            seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�'|| seka[i]== '�')
            k_d++;
    }
    cout << "Did�i�j� raid�i� yra: " << k_d << endl;
    cout << "Ma��j� raid�i� yra: " << k_m << endl;
    cout << "Skaitmen� yra: " << k_s << endl;
    cout << "Skyrikli� yra: " << k_skyr << endl;
    return 0;
}
