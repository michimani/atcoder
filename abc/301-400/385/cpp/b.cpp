#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

string to_key(ui a, ui b)
{
  return to_string(a) + "-" + to_string(b);
}

void check(map<string, bool> &visited, vector<string> &g, ui &x, ui &y)
{
  if (g[x - 1][y - 1] == '@')
    visited[to_key(x, y)] = true;
}

int main()
{
  ui h, w, x, y;
  cin >> h >> w >> x >> y;

  vector<string> g(h, "");
  for (auto &gg : g)
    cin >> gg;

  string t;
  cin >> t;

  map<string, bool> visited;

  for (auto tt : t)
  {
    switch (tt)
    {
    case 'U':
      if (g[x - 1 - 1][y - 1] == '#')
        break;

      x--;
      check(visited, g, x, y);
      break;

    case 'D':
      if (g[x - 1 + 1][y - 1] == '#')
        break;

      x++;
      check(visited, g, x, y);
      break;

    case 'L':
      if (g[x - 1][y - 1 - 1] == '#')
        break;

      y--;
      check(visited, g, x, y);
      break;

    case 'R':
      if (g[x - 1][y - 1 + 1] == '#')
        break;

      y++;
      check(visited, g, x, y);
      break;

    default:
      // noop
      break;
    }
  }

  cout << x << " " << y << " " << visited.size() << endl;

  return 0;
}