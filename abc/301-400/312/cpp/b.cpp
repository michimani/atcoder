#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

bool is_tc(const vector<string> &g, ui i, ui j)
{
  for (ui di = 0; di < 4; di++)
    for (ui dj = 0; dj < 4; dj++)
      if ((di < 3 && dj < 3) && (g[i + di][j + dj] != '#' || g[i + 8 - di][j + 8 - dj] != '#'))
        return false;
      else if ((di >= 3 || dj >= 3) && (g[i + di][j + dj] != '.' || g[i + 8 - di][j + 8 - dj] != '.'))
        return false;

  return true;
};

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> g(n);
  for (auto &s : g)
    cin >> s;

  for (ui i = 0; i < n - 8; i++)
    for (ui j = 0; j < m - 8; j++)
      if (is_tc(g, i, j))
        cout << i + 1 << " " << j + 1 << endl;

  return 0;
}