#import <iostream>
#import <iomanip>
#import <cmath>
#import <locale>

using namespace std;

int main(){

setlocale(LC_ALL, "Lithuanian");
int n, kiek1=0, kiek2=0;
float t, vid, sum=0;
    cout << "�veskite dien� skai�i� n. "; cin >> n;
for(int i = 0; i<n;i++){
    cout << "�veskite temperat�r� t "; cin >> t;
    if(t>0){ // tikrinimas ar temp teigiama
        kiek1++;
    }
    if (t<0){ // jei neigiama temp. sumuojamos ir irasoma kiek ju susumuojama
        sum+=t;
        kiek2++;
    }
}
vid=sum/kiek2;// vidurkio skaiciavimas
cout << kiek1 << " dienas temperat�ra buvo teigiama, vidutin� neigiam� temperat�r� reik�m� "<<setprecision(2) << vid << "." << endl;











return 0;
}
