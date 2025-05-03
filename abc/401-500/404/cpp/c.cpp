#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, vector<ui>> g;

  ui a, b;
  for (; m--;)
  {
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);

    if (g[a].size() > 2 || g[b].size() > 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  if (g.size() != n)
  {
    cout << "No" << endl;
    return 0;
  }

  ui s = g.begin()->first;
  ui c = s;
  map<ui, bool> visited;
  visited[s] = true;
  while (true)
  {
    if (visited.count(g[c][0]) == 0 || !visited[g[c][0]])
    {
      visited[g[c][0]] = true;
      c = g[c][0];
      continue;
    }

    if (visited.count(g[c][1]) == 0 || !visited[g[c][1]])
    {
      visited[g[c][1]] = true;
      c = g[c][1];
      continue;
    }

    break;
  }

  cout << (visited.size() == n ? "Yes" : "No") << endl;

  return 0;
}