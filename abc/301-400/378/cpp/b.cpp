#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<pair<ui, ui>> g(n);
  for (ui i = 0; i < n; i++)
    cin >> g[i].first >> g[i].second;

  ui q;
  cin >> q;
  ui t, d;
  pair<ui, ui> gg;

  ui ans = 0;
  for (; q--;)
  {
    cin >> t >> d;

    gg = g[t - 1];

    ui r = d % gg.first;
    ui rr = d / gg.first;
    if (r == gg.second)
      ans = d;
    else if (r < gg.second)
      ans = d + (gg.second - r);
    else
      ans = (rr + 1) * gg.first + gg.second;

    cout << ans << endl;
  }

  return 0;
}