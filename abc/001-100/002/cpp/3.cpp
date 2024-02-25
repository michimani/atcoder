#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  x2 -= x1;
  x3 -= x1;
  y2 -= y1;
  y3 -= y1;

  cout << fixed << setprecision(1) << abs(x2 * y3 - y2 * x3) / 2 << endl;
  return 0;
}
