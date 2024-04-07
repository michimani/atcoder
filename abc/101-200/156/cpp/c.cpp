#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<int> x(n, 0);
  int mx = 0;
  for (auto &xx : x)
  {
    cin >> xx;
    mx = max(mx, xx);
  }

  ui ans = pow(10, 9);
  for (int p = 1; p <= mx; p++)
  {
    ui t = 0;
    for (auto &xx : x)
      t += (xx - p) * (xx - p);

    ans = min(ans, t);
  }

  cout << ans << endl;
  return 0;
}