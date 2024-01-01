#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (b > 600)
  {
    cout << "No" << endl;
    return 0;
  }

  if (a == b)
  {
    cout << "Yes" << endl;
    return 0;
  }

  ui d = 6;
  while (d > 0 && a > 0 && b > 0)
  {
    ui dd = min(a, b / d);
    a -= dd;
    b -= d * dd;
    d--;
  }

  if (b == 0 && a == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}