#include <iostream>
#include <map>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, t;
  cin >> n >> t;

  map<ui, pair<ui, ui>> vg;
  for (ui i = 1; i <= n; i++)
    for (ui j = 1; j <= n; j++)
      vg[n * (i - 1) + j] = {i, j};

  map<ui, set<ui>> r;
  map<ui, set<ui>> d;
  set<ui> rd;
  set<ui> ld;

  for (ui ti = 1; ti <= t; ti++)
  {
    ui a;
    cin >> a;
    r[vg[a].first].insert(vg[a].second);
    d[vg[a].second].insert(vg[a].first);
    if (vg[a].first == vg[a].second)
      rd.insert(vg[a].first);
    if (vg[a].first + vg[a].second == n + 1)
      ld.insert(vg[a].first);

    if (r[vg[a].first].size() == n || d[vg[a].second].size() == n || rd.size() == n || ld.size() == n)
    {
      cout << ti << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}