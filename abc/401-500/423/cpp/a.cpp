#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, c;
  cin >> x >> c;

  int d = 0;
  int y = (x / 1000) * 1000;
  while (y > 0)
  {
    d = (y / 1000) * c;
    if (x >= y + d)
      break;

    y -= 1000;
  }

  cout << max(y, 0) << endl;

  return 0;
}