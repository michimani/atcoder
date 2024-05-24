#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double ha = 2.0 * M_PI * ((h / 12.0) + (1.0 / 12.0) * (m / 60.0));
  double ma = 2.0 * M_PI * (m / 60.0);

  double th = abs(ha - ma);

  double d = sqrt(a * a + b * b - 2.0 * a * b * cos(th));

  cout << fixed << setprecision(10) << d << endl;

  return 0;
}