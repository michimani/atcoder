#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, n;
  cin >> h >> w >> n;

  string t;
  cin >> t;

  vector<pair<ui, ui>> riku;

  vector<vector<char>> g(h, vector<char>(w));
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      cin >> g[i][j];
      if (g[i][j] == '.')
        riku.push_back({i, j});
    }
  }

  ui ans = 0;
  int sh = 0, sw = 0;
  bool ok = false;
  for (auto &r : riku)
  {
    ok = true;
    sh = int(r.first);
    sw = int(r.second);
    for (auto &d : t)
    {
      if (d == 'L')
      {
        sw--;
      }
      else if (d == 'R')
      {
        sw++;
      }
      else if (d == 'U')
      {
        sh--;
      }
      else if (d == 'D')
      {
        sh++;
      }
      else
      {
        // noop
      }

      if (g[ui(sh)][ui(sw)] == '#')
      {
        ok = false;
        break;
      }
    }

    ans += ui(ok);
  }

  cout << ans << endl;
  return 0;
}