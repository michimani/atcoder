#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, map<ui, bool>> g;
  for (ui i = 0; i < m; i++)
  {
    ui u, v;
    cin >> u >> v;

    g[u][v] = true;
    g[v][u] = true;
  }

  ui ans = 0;
  for (ui i = 1; i <= n; i++)
    for (ui j = i + 1; j <= n; j++)
      for (ui k = j + 1; k <= n; k++)
        ans += ui(g[i][j] && g[j][k] && g[k][i]);

  cout << ans << endl;

  return 0;
}