#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y >> z;

  if ((0 < y && y < z && y < x) || (x < y && z < y && y < 0))
  {
    cout << "-1" << endl;
    return 0;
  }

  if ((0 < y && y < x) || (y < 0 && x < y))
    cout << abs(x) + int((x > 0 && z < 0) || (x < 0 && z > 0)) * 2 * abs(z) << endl;
  else
    cout << abs(x) << endl;

  return 0;
}