#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ll = long long;

ll dist(pair<ll, ll> const &a, pair<ll, ll> const &b)
{
  return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<pair<ll, ll>> s(n);
  for (auto &ss : s)
    cin >> ss.first >> ss.second;

  vector<pair<ll, ll>> c(m);
  for (auto &cc : c)
    cin >> cc.first >> cc.second;

  reverse(c.begin(), c.end());

  for (auto &ss : s)
  {
    ui ci = 1;
    ll d = 400000000;
    for (ui i = 0; i < m; i++)
    {
      ll dd = dist(ss, c[i]);
      if (dd <= d)
      {
        d = dd;
        ci = m - i;
      }
    }

    cout << ci << endl;
  }

  return 0;
}