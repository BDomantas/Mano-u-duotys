#include <iomanip>
#include <iostream>
#include <cmath>
#include <locale>
#include <fstream>
using namespace std;
const char duomenys[] = "U7.txt";
const char rez[] = "U7rez.txt";
int main()
{
    setlocale(LC_ALL, "Lithuanian");

    ifstream skaitymas (duomenys);
    ofstream rasymas (rez);
    int m, n, vk, k, s=0;

    skaitymas >> k >> m >> n;
    s=k;
    vk=k;       //cout << vk <<" <--pradinis k" << endl;
    for(int i =1; i<n; i++)
    {
        s=s+30; //cout << s << " <--praeita diena" <<endl;
        vk+=s;  // cout << vk << " <--viso=praeita diena + m" << endl;
    }

    rasymas << vk;













    return 0;
}
