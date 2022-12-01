#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float x1, x2, y1, y2, a, b, c, d, e, f, g, rez;
    cout << "Iveskite x1 koordinates " << '.' << endl;
    cin >> x1;
    cout << "Iveskite x2 koordinates " << '.' << endl;
    cin >> x2;
    cout << "Inveskite y1 koordinates " << '.' << endl;
    cin >> y1;
    cout << "Inveskite y2 koordinates " << '.' << endl;
    cin >> y2;
    a = x1 - x2;
    b = a * a;
    c = y1 - y2;
    d = c * c;
    e = b + d;
    f = sqrt(e);
    cout << "Atstumas yra = " << setprecision(3) << f;

}
