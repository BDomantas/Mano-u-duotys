#import <iostream>
#import <iomanip>
#import <cmath>
#import <locale>

using namespace std;

int main()
{


    setlocale(LC_ALL, "Lithuanian");
    int n;
    double sum=0, rez,r,gal;
    cout << "�veskite vis� var�� skai�i� n"<< endl;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cout << endl <<"�veskite var�� r" << i+1 << " ";
        cin >>r;
        rez=1/r; // pagal desninguma 1/r = 1/r1 + 1/r2 + ....
        sum += rez;
    }
    gal=1/sum;
    cout << "Bendra grandin�s var�a r= " <<setprecision(2)<<gal << endl;
return 0;
}
