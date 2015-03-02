#include <iostream>
#include <locale>
#include <fstream>

using namespace std;
const char rez[] = "rezultatai.txt";
int main()
{
  setlocale (LC_ALL, "Lithuanian");
  ofstream rasymas (rez);
rasymas << "-------------------" << endl;
rasymas << " Simbolis   Kodas  " << endl;
rasymas << "-------------------" << endl;
 for(char i = 'a'; i<='z'; i++)
 rasymas << i << "           " << int (i) << endl;
 for(char j = 'A'; j<='Z'; j++)
  rasymas << j << "          " << int (j) << endl;
for(char z = '0'; z<='9'; z++)
  rasymas << z << "          " << int (z) << endl;


  return 0;
}
