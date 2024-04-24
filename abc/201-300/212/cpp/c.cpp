#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;
  sort(a.begin(), a.end());

  vector<ui> b(m, 0);
  for (auto &bb : b)
    cin >> bb;
  sort(b.begin(), b.end());

  ui ni = 0;
  ui mi = 0;
  ui ans = max((a[n - 1] > b[0] ? a[n - 1] - b[0] : b[0] - a[n - 1]), (b[m - 1] > a[0] ? b[m - 1] - a[0] : a[0] - b[m - 1]));
  while (ni < n - 1 || mi < m - 1)
  {
    if (a[ni] > b[mi])
    {
      ans = min(ans, a[ni] - b[mi]);
      if (mi == m - 1)
        ni = min(ni + 1, n - 1);
      else
        mi = min(mi + 1, m - 1);
    }
    else
    {
      ans = min(ans, b[mi] - a[ni]);
      if (ni == n - 1)
        mi = min(mi + 1, m - 1);
      else
        ni = min(ni + 1, n - 1);
    }
  }

  cout << ans << endl;

  return 0;
}