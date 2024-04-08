#include <iostream>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  double l;
  cin >> l;

  double a = l / 3;
  double b = l / 3;
  double c = l - a - b;

  cout << fixed << setprecision(7) << a * b * c << endl;
  return 0;
}