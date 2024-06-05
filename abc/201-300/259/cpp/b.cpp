#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, d;
  cin >> a >> b >> d;

  double rad = (d / 180) * M_PI;
  cout << fixed << setprecision(7) << a * cos(rad) - b * sin(rad);
  cout << " ";
  cout << fixed << setprecision(7) << a * sin(rad) + b * cos(rad) << endl;

  return 0;
}