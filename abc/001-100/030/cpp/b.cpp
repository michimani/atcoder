#include <iostream>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  double n, m;
  cin >> n >> m;

  n -= double(12 * ui(n >= 12));

  double dm = m / 60.0;
  double dn = n / 12.0 + dm * (1.0 / 12.0);
  double a = 360 * abs(dm - dn);
  if (a >= 180)
    a = 360 - a;

  cout << fixed << setprecision(5) << a << endl;

  return 0;
}