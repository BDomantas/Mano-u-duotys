#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale (LC_ALL, "Lithuanian");

 int n, s, sum=0, sum1=0;

cout << "�veskite pirmaj� nari nari� sumai rasit " << endl;

cin >> n;


cout << "�veskite bet kok� skaitmen�" << endl;
cin >> s;

for(int i=1; i<=n; i++){

sum=sum*10+s;
sum1+=sum;

}

 cout << "nari� suma yra " << sum1 << endl;




  return 0;
}

