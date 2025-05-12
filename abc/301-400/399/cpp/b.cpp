#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<pair<ui, ui>> p(n, {0, 0});
  vector<pair<ui, ui>> pv(n);
  for (ui i = 0; i < n; i++)
  {
    cin >> p[i].first;
    pv[i] = {p[i].first, i};
  }

  sort(pv.rbegin(),
       pv.rend(),
       [](const pair<ui, ui> &a, const pair<ui, ui> &b)
       { return a.first < b.first; });

  ui r = 1;
  ui prev = pv[0].first;
  ui t = 0;
  for (auto const &pvv : pv)
  {
    if (pvv.first != prev)
    {
      r += t;
      t = 1;
    }
    else
    {
      t++;
    }

    p[pvv.second].second = r;
    prev = pvv.first;
  }

  for (auto const &pp : p)
    cout << pp.second << endl;

  return 0;
}