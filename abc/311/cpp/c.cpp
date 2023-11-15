#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool traverse(map<int, int> &edges, int pos, vector<int> &routes, map<int, unsigned int> &visited, map<int, bool> &visited_all)
{
  if (routes.size() > 0 && visited.count(pos) != 0)
  {
    cout << routes.size() - visited[pos] + 1 << endl;
    for (unsigned int i = visited[pos] - 1; i < routes.size(); i++)
    {
      if (i > visited[pos] - 1)
      {
        cout << " ";
      }
      cout << routes[i];
    }
    cout << endl;

    return true;
  }

  if (visited.count(pos) != 0)
  {
    return false;
  }

  routes.push_back(pos);
  visited[pos] = routes.size();
  visited_all[pos] = true;
  return traverse(edges, edges[pos], routes, visited, visited_all);
}

int main()
{
  int n = 0;
  cin >> n;

  map<int, int> edges_map;
  for (int i = 1; i <= n; i++)
  {
    int a = 0;
    cin >> a;
    edges_map[i] = a;

    if (edges_map[a] == i)
    {
      cout << 2 << endl;
      cout << i << " " << a << endl;
      return 0;
    }
  }

  map<int, bool> skip;
  for (int i = 1; i <= n; i++)
  {
    if (skip.count(i) != 0)
    {
      continue;
    }

    vector<int> routes;
    map<int, unsigned int> visited;

    if (traverse(edges_map, i, routes, visited, skip))
    {
      return 0;
    }
  }
}