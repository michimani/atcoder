#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui mx = 0;
  vector<ui> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
    mx = max(mx, aa);
  }

  pair<ui, ui> ans = {0, 0};
  for (ui k = 2; k <= mx; k++)
  {
    ui at = 0;
    for (auto &aa : a)
      at += ui(aa % k == 0);

    if (at > ans.first)
      ans = {at, k};
  }

  cout << ans.second << endl;
  return 0;
}