#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> r(n);
  vector<ui> c(n);

  for (ui i = 0; i < n; i++)
    cin >> r[i] >> c[i];

  sort(r.begin(), r.end());
  sort(c.begin(), c.end());

  ui tr = (r[0] + r[n - 1]) / 2;
  ui tc = (c[0] + c[n - 1]) / 2;

  ui ans = max(
      max(tr - r[0], r[n - 1] - tr),
      max(tc - c[0], c[n - 1] - tc));

  cout << ans << endl;

  return 0;
}