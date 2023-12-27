#include <iostream>
#include <vector>
#include <map>

using namespace std;

string key(vector<unsigned int> p)
{
  return to_string(p[0]) + "-" + to_string(p[1]);
}

int main()
{
  unsigned int h, w;
  cin >> h >> w;

  map<string, bool> visited;
  vector<vector<char>> g(h + 2, vector<char>(w + 2, '.'));

  for (unsigned int hi = 1; hi <= h; hi++)
  {
    for (unsigned int wi = 1; wi <= w; wi++)
    {
      cin >> g[hi][wi];
    }
  }

  vector<unsigned int> p = {1, 1};
  unsigned int times = 0;
  bool loop = false;
  while (true)
  {
    string k = key(p);
    if (visited[k])
    {
      times++;
      if (times >= visited.size())
      {
        loop = true;
        break;
      }
    }

    visited[k] = true;

    if (g[p[0]][p[1]] == 'U' && p[0] != 1)
    {
      p[0]--;
      continue;
    }

    if (g[p[0]][p[1]] == 'D' && p[0] != h)
    {
      p[0]++;
      continue;
    }

    if (g[p[0]][p[1]] == 'L' && p[1] != 1)
    {
      p[1]--;
      continue;
    }

    if (g[p[0]][p[1]] == 'R' && p[1] != w)
    {
      p[1]++;
      continue;
    }

    break;
  }

  if (loop)
  {
    cout << "-1" << endl;
    return 0;
  }

  cout << p[0] << " " << p[1] << endl;
  return 0;
}