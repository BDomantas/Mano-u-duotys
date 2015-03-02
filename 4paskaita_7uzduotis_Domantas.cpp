#include <iostream>

using namespace std;
bool tikrinimas (int x1, int y1, int x2, int y2, int x3, int y3);
int main()
{

  setlocale (0, "");
  int x1, y1, x2, y2, x3, y3;
cout << "Įveskite koordinates x1, y1, x2, y2, x3 ir y3" << endl;
  cin >> x1>> y1>> x2>> y2>> x3>> y3;

  if(tikrinimas(x1, y1, x2, y2, x3, y3)){
  cout << "Taðkai yra vienoje tiesëje" << endl;
  }
  else{
  cout << "Taðkai nëra vienoje tiesëje" << endl;
  }



  return 0;
}


bool tikrinimas (int x1, int y1, int x2, int y2, int x3, int y3){
int ar = (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1); // trikrinmo formule duota salygoje

if(ar == 0){
    return true;
}

else {

return false;

}
}
