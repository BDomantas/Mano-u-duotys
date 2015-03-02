#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

setlocale(LC_ALL, "Lithuanian");

int m, n, sum = 0, pad_m;
cout << "Iveskite m litu." << endl;
cin >> m;
cout << "Iveskite gimtadieni n " << endl;
cin >> n;
sum = m;
for(int i = 1; i<=n ; i++){

    pad_m =i*10;
    sum += pad_m; // kasmet padideja keik metu kart 10



}
cout << "Vaikas tures: " << sum << " Lt. " << endl;




}
