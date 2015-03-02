#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale (LC_ALL, "Lithuanian");
int m, d, s=1, k=1, kiek=1;
cout << "áveskite saldainiø skaièiø m" << endl;
cin>> m;
while(m>s){
k++;
s+=k;
kiek++;
}

cout << "d= " << kiek << endl;

  return 0;
}
