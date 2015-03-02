#include <iostream>
#include <locale>

using namespace std;

int main()
{

  setlocale (LC_ALL, "Lithuanian");


  int t;

  cout << "áveskite laikà minutëmis nuo valandos pradþios" << endl;

  cin >> t;

  if(t%5==0){
   cout << "Dega raudona tuoj uþsidegs þalia" << endl;
  }
  else if (t%5==4){

  cout << "Dega raudona ðviesa" << endl;
  }

  else if(t%5==3){
    cout << "Dega þalia tuoj uþsidegs raudona" << endl;
  }
   else if(t%5==2){
    cout << "Dega þalia " << endl;
  }
  else{
  cout << "Dega þalia" << endl;
  }





  return 0;
}
