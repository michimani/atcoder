#include <iostream>
#include <map>
#include <vector>

using namespace std;

void visit(map<unsigned int, map<unsigned int, bool>> &g, unsigned int f, vector<bool> &visited)
{
  if (visited[f - 1])
  {
    return;
  }

  visited[f - 1] = true;
  auto iter = g[f].begin();
  while (iter != g[f].end())
  {
    visit(g, iter->first, visited);
    iter++;
  }

  return;
}

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  if (m == 0)
  {
    cout << n << endl;
    return 0;
  }

  map<unsigned int, map<unsigned int, bool>> g;
  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int u, v;
    cin >> u >> v;

    g[u][v] = true;
    g[v][u] = true;
  }

  unsigned int ans = 0;
  vector<bool> visited(n, false);
  for (unsigned int i = 0; i < n; i++)
  {
    if (visited[i])
    {
      continue;
    }

    visit(g, i + 1, visited);

    ans++;
  }

  cout << ans << endl;

  return 0;
}