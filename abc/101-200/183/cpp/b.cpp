#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  cout << fixed << setprecision(7) << (sy * (gx - sx)) / (gy + sy) + sx << endl;
  return 0;
}