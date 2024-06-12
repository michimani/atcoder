#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

void draw(vector<string> &g, ui x, ui y, ui gs)
{
  if (gs == 1)
  {
    g[x][y] = '#';
    return;
  }

  ui bs = gs / 3;
  for (ui i = 0; i < 3; ++i)
  {
    for (ui j = 0; j < 3; ++j)
    {
      if (i == 1 && j == 1)
        continue;
      draw(g, x + i * bs, y + j * bs, bs);
    }
  }
}

int main()
{
  ui n;
  cin >> n;

  ui gs = ui(pow(3, n));
  vector<string> g(gs, string(gs, '.'));

  draw(g, 0, 0, gs);

  for (ui i = 0; i < gs; ++i)
    cout << g[i] << endl;

  return 0;
}