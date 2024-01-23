#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ul = unsigned long;

int main()
{
  ui n;
  cin >> n;

  vector<int> a(n);
  int mn = 101;
  int mx = -101;
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }

  ul ans = 0;
  for (int t = mn; t <= mx; t++)
  {
    ul c = 0;
    for (auto aa : a)
    {
      c += ul(pow(abs(aa - t), 2));
    }

    ans = ans == 0 ? c : min(ans, c);
  }

  cout << ans << endl;
  return 0;
}