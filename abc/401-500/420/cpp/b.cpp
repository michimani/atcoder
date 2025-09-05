#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<pair<ui, ui>> p(n);
  for (ui i = 0; i < n; i++)
    p[i].first = i + 1;

  string s = "";
  vector<ui> z = {}, o = {};
  vector<string> g(n);
  for (auto &gg : g)
    cin >> gg;

  char c = '.';

  for (ui mi = 0; mi < m; mi++)
  {
    z = {}, o = {};
    for (ui ni = 0; ni < n; ni++)
    {
      c = g[ni][mi];
      if (c == '0')
        z.push_back(ni);
      else if (c == '1')
        o.push_back(ni);
    }

    if (z.size() < o.size())
    {
      for (auto j : z)
        p[j].second++;
    }
    else if (z.size() > o.size())
    {
      for (auto j : o)
        p[j].second++;
    }
  }

  sort(p.begin(), p.end(), [](const auto &a, const auto &b)
       { return a.second > b.second; });

  cout << p[0].first;
  ui i = 1;
  while (p[i].second == p[i - 1].second && i < n)
  {
    cout << " " << p[i].first;
    i++;
  }

  cout << endl;

  return 0;
}