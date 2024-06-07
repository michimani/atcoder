#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  ull nn = 0;
  map<ull, map<ui, ull>> p;
  for (ui i = 1; i <= n; i++)
  {
    ull a;
    cin >> a;

    if (a == i)
      nn++;
    else
      p[a][i]++;
  }

  ull ans = 0;
  ull nnn = 0;
  for (auto &it : p)
    for (auto &itt : it.second)
      nnn += ull(p.count(itt.first) > 0 && p[itt.first].count(it.first) > 0) * itt.second;

  if (nnn > 0)
    ans += nnn / 2;

  if (nn > 0)
    ans += (nn * (nn - 1)) / 2;

  cout << ans << endl;

  return 0;
}