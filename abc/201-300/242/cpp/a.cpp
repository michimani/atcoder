#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, c, x;
  cin >> a >> b >> c >> x;

  if (x <= a)
  {
    cout << 1.0 << endl;
    return 0;
  }

  if (x > b)
  {
    cout << 0.0 << endl;
    return 0;
  }

  cout << fixed << setprecision(7) << c / (b - a) << endl;

  return 0;
}