#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<string> g(h, string(w, '.'));
  vector<vector<int>> dist(h, vector<int>(w, -1));
  vector<pair<ui, ui>> exits;

  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      cin >> g[i][j];
      if (g[i][j] == 'E')
      {
        exits.push_back({i, j});
        dist[i][j] = 0;
      }
    }
  }

  vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  vector<pair<ui, ui>> q = exits;
  for (ui qi = 0; qi < q.size(); qi++)
  {
    auto [i, j] = q[qi];

    for (auto [di, dj] : dirs)
    {
      int ni = int(i) + di, nj = int(j) + dj;
      if (ni < 0 || ni >= int(h) || nj < 0 || nj >= int(w))
      {
        continue;
      }
      if (g[ui(ni)][ui(nj)] == '.' && dist[ui(ni)][ui(nj)] == -1)
      {
        dist[ui(ni)][ui(nj)] = dist[i][j] + 1;
        q.push_back({ni, nj});
      }
    }
  }

  vector<string> ans(h, string(w, '#'));
  vector<char> dest = {'^', 'v', '<', '>'};
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      if (g[i][j] == '.')
      {
        for (ui k = 0; k < 4; k++)
        {
          auto [di, dj] = dirs[k];
          int ni = int(i) + di, nj = int(j) + dj;
          if (ni < 0 || ni >= int(h) || nj < 0 || nj >= int(w))
          {
            continue;
          }
          if (dist[ui(ni)][ui(nj)] == dist[i][j] - 1)
          {
            ans[i][j] = dest[k];
            break;
          }
        }
      }
      else if (g[i][j] == 'E')
      {
        ans[i][j] = 'E';
      }
    }
  }

  for (const auto &row : ans)
    cout << row << endl;

  return 0;
}