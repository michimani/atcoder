#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, n;
  cin >> h >> w >> n;
  vector<string> g(h, string(w, '.'));

  ui i = 0, j = 0;
  char prev = 'U';
  for (ui k = 0; k < n; k++)
  {
    if (g[j][i] == '.')
    {
      g[j][i] = '#';
      switch (prev)
      {
      case 'U':
        i = (i + 1) % w;
        prev = 'R';
        break;

      case 'R':
        j = (j + 1) % h;
        prev = 'D';
        break;

      case 'D':
        i = (i + w - 1) % w;
        prev = 'L';
        break;

      case 'L':
        j = (j + h - 1) % h;
        prev = 'U';
        break;

      default:
        // noop
        break;
      }
    }
    else
    {
      g[j][i] = '.';
      switch (prev)
      {
      case 'U':
        i = (i + w - 1) % w;
        prev = 'L';
        break;

      case 'L':
        j = (j + 1) % h;
        prev = 'D';
        break;

      case 'D':
        i = (i + 1) % w;
        prev = 'R';
        break;

      case 'R':
        j = (j + h - 1) % h;
        prev = 'U';
        break;

      default:
        // noop
        break;
      }
    }
  }

  for (auto hh : g)
  {
    for (auto ww : hh)
    {
      cout << ww;
    }
    cout << endl;
  }

  return 0;
}