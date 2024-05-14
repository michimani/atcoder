#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  double d = 0;
  double b = 0;
  for (; n--;)
  {
    double a;
    cin >> a;

    if (a > 0)
    {
      d++;
      b += a;
    }
  }

  cout << ceil(b / d) << endl;
  return 0;
}