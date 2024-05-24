#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, x, y;
  cin >> h >> w >> x >> y;

  vector<string> g(h + 2, string(w + 2, '#'));
  for (ui i = 1; i <= h; i++)
  {
    string s;
    cin >> s;
    g[i] = "#" + s + "#";
  }

  ui ans = 1;
  bool u = true, d = true, r = true, l = true;
  ui a = 1;
  while ((u || d || r || l))
  {
    if (u && g[x - a][y] == '.')
      ans++;
    else
      u = false;

    if (d && g[x + a][y] == '.')
      ans++;
    else
      d = false;

    if (r && g[x][y + a] == '.')
      ans++;
    else
      r = false;

    if (l && g[x][y - a] == '.')
      ans++;
    else
      l = false;

    a++;
  }

  cout << ans << endl;

  return 0;
}