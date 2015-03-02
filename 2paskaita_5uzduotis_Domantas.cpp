#include <iostream>
#include <locale>

using namespace std;

int main()
{

  setlocale (LC_ALL, "Lithuanian");

  double x1, x2 , xc, y1, y2, yc, s, p;

   cout << "áveskite x1, x2 y1 ir y2 koordinates" << endl;

  cin >> x1 >> x2 >> y1 >> y2;

  xc=(x1+x2)/2;
  yc=(y1+y2)/2;

  s= (x2-x1)*(y1-y2);

  p= (x2-x1)*2+(y1-y2)*2;

  cout << "x,y centro koordinatës " << xc << " ir " << yc << endl;
  cout << "Plotas yra " << s << endl;
  cout << "Perimetras yra " << p << endl;

















  return 0;
}
