#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<vector<string>> g(3, vector<string>(3, "."));
  map<string, pair<ui, ui>> sg;
  for (ui i = 0; i < 3; i++)
  {
    for (ui j = 0; j < 3; j++)
    {
      cin >> g[i][j];
      sg[g[i][j]] = {i, j};
    }
  }

  ui n;
  cin >> n;
  for (; n--;)
  {
    string b;
    cin >> b;
    if (sg.count(b) == 0)
      continue;
    pair<ui, ui> ij = sg[b];
    g[ij.first][ij.second] = "#";
  }

  if (
      (g[0][0] == "#" && g[0][1] == "#" && g[0][2] == "#") ||
      (g[1][0] == "#" && g[1][1] == "#" && g[1][2] == "#") ||
      (g[2][0] == "#" && g[2][1] == "#" && g[2][2] == "#") ||
      (g[0][0] == "#" && g[1][0] == "#" && g[2][0] == "#") ||
      (g[0][1] == "#" && g[1][1] == "#" && g[2][1] == "#") ||
      (g[0][2] == "#" && g[1][2] == "#" && g[2][2] == "#") ||
      (g[0][0] == "#" && g[1][1] == "#" && g[2][2] == "#") ||
      (g[0][2] == "#" && g[1][1] == "#" && g[2][0] == "#"))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}