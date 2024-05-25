#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ll = long long;

struct Z
{
  ll x, y;
};

int main()
{
  ui n;
  cin >> n;

  vector<Z> z(n);
  for (auto &zz : z)
    cin >> zz.x >> zz.y;

  ui ans = 0;
  for (ui a = 0; a < n; a++)
    for (ui b = a + 1; b < n; b++)
      for (ui c = b + 1; c < n; c++)
        ans += ui((z[a].y - z[b].y) * (z[b].x - z[c].x) != (z[b].y - z[c].y) * (z[a].x - z[b].x));

  cout << ans << endl;

  return 0;
}