#include <iostream>
#include <locale>

using namespace std;

int main()
{

  setlocale (LC_ALL, "Lithuanian");
char seka[] = "Man patinka programuoti C++ kalba.";
int ilgis = sizeof(seka);
int zdz=0;
for(int i = 0; i<ilgis-1; i++){
    if(seka[i] == ' ') // tikrinimas ar simboliu sekos simbolis i yra tarpas jeigu taip tai reiskias yra zodis
    zdz++;

}
cout <<  "Eilutëje yra "<< zdz+1   << " þodþiai."<< endl; // +1 nes isiskaito pirmas zodis taip pat
  return 0;
}
