#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL ,"Lithuanian");
    int h, m,s, viso, n;

    cout << " �veskite laikrod�io rodom� laik� ir t.y. valandos, minutes, sekund�s ir pokyt�. " << endl;

    cin >> h >> m >> s >> n;
    viso = h*60*60+m*60+s+n;
    h= viso / 3600;
    viso -= h*3600;
    m = viso/60;
    s = viso-m*60;
    cout << "laikas po n sekund�i� ";
    cout << h%24 << ":" << m << ":" << s << endl;


    return 0;
}
