#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  ui ans = 1;
  for (ui t = 2; t < 1000; t++)
  {
    ui tt = t;
    if (tt * t > x)
      continue;
    while (tt <= x && tt * t <= x)
      tt *= t;
    ans = max(ans, tt);
  }

  cout << ans << endl;

  return 0;
}
