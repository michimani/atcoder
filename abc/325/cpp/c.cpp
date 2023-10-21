#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sensor_traverse(vector<string> &grid, unsigned long i, unsigned long j, vector<string> &visited, int &visited_sensor_count)
{
  visited[i][j] = '#';
  visited_sensor_count++;
  for (unsigned long ti = max((unsigned long)(1), i - 1); ti <= min(i + 1, (unsigned long)(grid.size() - 1)); ti++)
  {
    for (unsigned long tj = max((unsigned long)(1), j - 1); tj <= min(j + 1, (unsigned long)(grid[0].size())); tj++)
    {
      if (ti == i && tj == j)
      {
        continue;
      }

      if (visited[ti][tj] != '#' && grid[ti][tj] == '#')
      {
        sensor_traverse(grid, ti, tj, visited, visited_sensor_count);
      }
    }
  }
}

int main()
{
  unsigned long h, w;
  cin >> h >> w;

  string dummy(w + 2, '.');
  vector<string> grid(h + 2, dummy);
  int sensor_count = 0;
  for (unsigned long j = 1; j <= h; j++)
  {
    string s;
    cin >> s;
    sensor_count += count(s.begin(), s.end(), '#');
    s = "." + s + ".";
    grid[j] = s;
  }

  int ans = 0;
  vector<string> visited(h + 2, dummy);
  int visited_sensor_count = 0;
  for (unsigned long i = 1; i <= h; i++)
  {
    if (visited_sensor_count == sensor_count)
    {
      cout << ans << endl;
      return 0;
    }

    for (unsigned long j = 1; j <= w; j++)
    {
      if (visited_sensor_count == sensor_count)
      {
        cout << ans << endl;
        return 0;
      }

      if (grid[i][j] != '#' || visited[i][j] == '#')
      {
        continue;
      }

      ans++;
      sensor_traverse(grid, i, j, visited, visited_sensor_count);
    }
  }

  cout << ans << endl;
}