#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;
  vector<string> g(h, "");
  for (auto &r : g)
  {
    cin >> r;
  }

  for (unsigned int i = 0; i < h; i++)
  {
    for (unsigned int j = 0; j < w; j++)
    {
      // ←→
      if (j <= w - 5)
      {
        if (g[i][j] == 's' && g[i][j + 1] == 'n' && g[i][j + 2] == 'u' && g[i][j + 3] == 'k' && g[i][j + 4] == 'e')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + 1 << " " << j + d + 1 << endl;
          }
          return 0;
        }

        if (g[i][j] == 'e' && g[i][j + 1] == 'k' && g[i][j + 2] == 'u' && g[i][j + 3] == 'n' && g[i][j + 4] == 's')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + 1 << " " << j + (4 - d) + 1 << endl;
          }
          return 0;
        }
      }

      // ↑↓
      if (i <= h - 5)
      {
        if (g[i][j] == 's' && g[i + 1][j] == 'n' && g[i + 2][j] == 'u' && g[i + 3][j] == 'k' && g[i + 4][j] == 'e')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + d + 1 << " " << j + 1 << endl;
          }
          return 0;
        }

        if (g[i][j] == 'e' && g[i + 1][j] == 'k' && g[i + 2][j] == 'u' && g[i + 3][j] == 'n' && g[i + 4][j] == 's')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + (4 - d) + 1 << " " << j + 1 << endl;
          }
          return 0;
        }
      }

      // ➘↖
      if (j <= w - 5 && i <= h - 5)
      {
        if (g[i][j] == 's' && g[i + 1][j + 1] == 'n' && g[i + 2][j + 2] == 'u' && g[i + 3][j + 3] == 'k' && g[i + 4][j + 4] == 'e')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + d + 1 << " " << j + d + 1 << endl;
          }
          return 0;
        }

        if (g[i][j] == 'e' && g[i + 1][j + 1] == 'k' && g[i + 2][j + 2] == 'u' && g[i + 3][j + 3] == 'n' && g[i + 4][j + 4] == 's')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + (4 - d) + 1 << " " << j + (4 - d) + 1 << endl;
          }
          return 0;
        }
      }

      // ↙➚
      if (j > 4 && i <= h - 5)
      {
        if (g[i][j] == 's' && g[i + 1][j - 1] == 'n' && g[i + 2][j - 2] == 'u' && g[i + 3][j - 3] == 'k' && g[i + 4][j - 4] == 'e')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + d + 1 << " " << j - d + 1 << endl;
          }
          return 0;
        }

        if (g[i][j] == 'e' && g[i + 1][j - 1] == 'k' && g[i + 2][j - 2] == 'u' && g[i + 3][j - 3] == 'n' && g[i + 4][j - 4] == 's')
        {
          for (unsigned int d = 0; d < 5; d++)
          {
            cout << i + (4 - d) + 1 << " " << j - (4 - d) + 1 << endl;
          }
          return 0;
        }
      }
    }
  }

  return 0;
}