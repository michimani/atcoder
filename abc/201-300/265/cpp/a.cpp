#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y, n;
  cin >> x >> y >> n;

  int ans = 10000;
  for (int xc = 0; xc <= n; xc++)
  {
    int yc = n - xc;
    if (yc % 3 != 0)
    {
      continue;
    }

    ans = min(ans, x * xc + y * (yc / 3));
  }

  cout << ans << endl;
  return 0;
}