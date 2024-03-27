#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<vector<char>> g(h, vector<char>(w, '.'));
  ui hs = h, he = 0, ws = w, we = 0;
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      cin >> g[i][j];
      if (g[i][j] == '#')
      {
        hs = min(hs, i);
        ws = min(ws, j);
        he = max(he, i);
        we = max(we, j);
      }
    }
  }

  for (ui i = hs; i <= he; i++)
  {
    for (ui j = ws; j <= we; j++)
    {
      if (g[i][j] == '.')
      {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}