#include <iostream>
#include <locale>

using namespace std;

int main()
{

  setlocale (LC_ALL, "Lithuanian");


  int t;

  cout << "�veskite laik� minut�mis nuo valandos prad�ios" << endl;

  cin >> t;

  if(t%5==0){
   cout << "Dega raudona tuoj u�sidegs �alia" << endl;
  }
  else if (t%5==4){

  cout << "Dega raudona �viesa" << endl;
  }

  else if(t%5==3){
    cout << "Dega �alia tuoj u�sidegs raudona" << endl;
  }
   else if(t%5==2){
    cout << "Dega �alia " << endl;
  }
  else{
  cout << "Dega �alia" << endl;
  }





  return 0;
}
