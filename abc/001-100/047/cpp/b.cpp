#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui w, h, n;
  cin >> w >> h >> n;

  ui s = w * h;
  vector<string> g(h, string(w, '#'));

  for (; n--;)
  {
    ui x, y, a;
    cin >> x >> y >> a;

    switch (a)
    {
    case 1:
      for (ui i = 0; i < h; i++)
      {
        for (ui j = 0; j < x; j++)
        {
          s -= ui(g[i][j] == '#');
          g[i][j] = '_';
        }
      }
      break;

    case 2:
      for (ui i = 0; i < h; i++)
      {
        for (ui j = x; j < w; j++)
        {
          s -= ui(g[i][j] == '#');
          g[i][j] = '_';
        }
      }
      break;

    case 3:
      for (ui i = 0; i < y; i++)
      {
        for (ui j = 0; j < w; j++)
        {
          s -= ui(g[i][j] == '#');
          g[i][j] = '_';
        }
      }
      break;

    case 4:
      for (ui i = y; i < h; i++)
      {
        for (ui j = 0; j < w; j++)
        {
          s -= ui(g[i][j] == '#');
          g[i][j] = '_';
        }
      }
      break;

    default:
      // noop
      break;
    }
  }

  cout << s << endl;

  return 0;
}