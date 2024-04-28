#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  ull const D = 1000000007;

  vector<ull> c(n, 0);
  for (auto &cc : c)
    cin >> cc;

  sort(c.begin(), c.end());

  ull ans = 1;
  for (ui i = 0; i < n; i++)
  {
    ans *= (c[i] - i);
    ans %= D;
  }

  cout << ans << endl;
  return 0;
}