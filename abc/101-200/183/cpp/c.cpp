#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  ull k;
  cin >> n >> k;

  map<ui, map<ui, ull>> t;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      ull tt;
      cin >> tt;
      t[i][j] = tt;
    }
  }

  vector<ui> c(n - 1, 0);
  for (ui i = 1; i < n; i++)
    c[i - 1] = i;

  ull ans = 0;
  do
  {
    ull total = t[0][c[0]] + t[c[n - 2]][0];
    for (ui i = 1; i < n - 1; i++)
      total += t[c[i - 1]][c[i]];

    ans += ull(total == k);
  } while (next_permutation(c.begin(), c.end()));

  cout << ans << endl;
  return 0;
}