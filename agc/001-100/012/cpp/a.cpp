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

  vector<ui> a(3 * n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  sort(a.rbegin(), a.rend());

  ull ans = 0;
  for (ui i = 0; i < n; i++)
  {
    ans += a[i * 2 + 1];
  }

  cout << ans << endl;
  return 0;
}