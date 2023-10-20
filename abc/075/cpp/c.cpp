#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool traverse(
    map<int, vector<int>> edges,
    int prev_vertex,
    int current_vertex,
    map<int, bool> root,
    vector<int> root_vec)
{
  bool loop = false;
  for (auto &e : edges[current_vertex])
  {
    if (e == prev_vertex)
    {
      continue;
    }
    if (e == root_vec[0])
    {
      return true;
    }
    if (root.count(e) != 0)
    {
      continue;
    }
    root[e] = true;
    root_vec.push_back(e);
    loop = loop || traverse(edges, current_vertex, e, root, root_vec);
  }

  return loop;
}

int main()
{
  int n, m;
  cin >> n >> m;

  if (n - 1 == m)
  {
    cout << m << endl;
    return 0;
  }

  map<int, vector<int>> edges;
  map<int, bool> vertices;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    if (edges.count(a) == 0)
    {
      edges[a] = {b};
    }
    else
    {
      edges[a].push_back(b);
    }
    if (edges.count(b) == 0)
    {
      edges[b] = {a};
    }
    else
    {
      edges[b].push_back(a);
    }

    vertices[a] = true;
    vertices[b] = true;
  }

  int loop_gen_vertices_count = 0;
  auto v_iter = vertices.begin();
  while (v_iter != vertices.end())
  {
    bool is_loop = traverse(edges, 0, v_iter->first, {{v_iter->first, true}}, {v_iter->first});
    loop_gen_vertices_count += int(is_loop);
    v_iter++;
  }

  cout << n - loop_gen_vertices_count << endl;
}