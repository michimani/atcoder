#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <tuple>

using namespace std;

string to_key(unsigned int y, unsigned int x)
{
  return to_string(y) + "-" + to_string(x);
}

void bfs(vector<vector<char>> &grid, vector<tuple<unsigned int, unsigned int>> cands, unsigned int l, vector<vector<unsigned int>> &visited)
{
  if (cands.size() == 0)
  {
    return;
  }

  vector<tuple<unsigned int, unsigned int>> new_cands;
  map<string, bool> cands_map;
  for (auto &c : cands)
  {
    unsigned int y = get<0>(c);
    unsigned int x = get<1>(c);

    grid[y][x] = '#';
    visited[y][x] = min(visited[y][x], l);

    if (grid[y - 1][x] != '#' && !cands_map[to_key(y - 1, x)])
    {
      new_cands.push_back({y - 1, x});
      cands_map[to_key(y - 1, x)] = true;
    }

    if (grid[y][x - 1] != '#' && !cands_map[to_key(y, x - 1)])
    {
      new_cands.push_back({y, x - 1});
      cands_map[to_key(y, x - 1)] = true;
    }

    if (grid[y + 1][x] != '#' && !cands_map[to_key(y + 1, x)])
    {
      new_cands.push_back({y + 1, x});
      cands_map[to_key(y + 1, x)] = true;
    }

    if (grid[y][x + 1] != '#' && !cands_map[to_key(y, x + 1)])
    {
      new_cands.push_back({y, x + 1});
      cands_map[to_key(y, x + 1)] = true;
    }
  }

  bfs(grid, new_cands, l + 1, visited);
}

int main()
{
  unsigned int r, c;
  cin >> r >> c;

  unsigned int sy, sx;
  cin >> sy >> sx;

  unsigned int gy, gx;
  cin >> gy >> gx;

  vector<vector<char>> grid(r + 2, vector<char>(c + 2, '#'));
  for (unsigned int y = 0; y < r; y++)
  {
    for (unsigned int x = 0; x < c; x++)
    {
      cin >> grid[y + 1][x + 1];
    }
  }

  vector<vector<unsigned int>> visited(r + 2, vector<unsigned int>(c + 2, r * c));
  vector<tuple<unsigned int, unsigned int>> cands = {{sy, sx}};
  bfs(grid, cands, 0, visited);

  cout << visited[gy][gx] << endl;
}