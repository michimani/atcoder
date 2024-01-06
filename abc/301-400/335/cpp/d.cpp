#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<string>> g(n + 2, vector<string>(n + 2, "_"));
  for (ui i = 0; i <= n + 1; i++)
  {
    for (ui j = 0; j <= n + 1; j++)
    {
      if (i == 0 || i == n + 1 || j == 0 || j == n + 1)
      {
        g[i][j] = "x";
      }
    }
  }

  ui x = 1, y = 1;
  g[1][1] = "1";
  for (ui m = 1; m <= n * n - 1; m++)
  {
    if (g[y][x + 1] == "_" && g[y + 1][x] == "_")
    {
      x++;
    }
    else if (g[y + 1][x] == "_" && g[y][x - 1] == "_")
    {
      y++;
    }
    else if (g[y][x - 1] == "_" && g[y - 1][x] == "_")
    {
      x--;
    }
    else if (g[y - 1][x] == "_" && g[y][x + 1] == "_")
    {
      y--;
    }
    else if (g[y][x + 1] == "_")
    {
      x++;
    }
    else if (g[y + 1][x] == "_")
    {
      y++;
    }
    else if (g[y][x - 1] == "_")
    {
      x--;
    }
    else if (g[y - 1][x] == "_")
    {
      y--;
    }

    string s = to_string(m + 1);
    if (m == n * n - 1)
    {
      s = "T";
    }

    g[y][x] = s;
  }

  for (ui i = 1; i <= n; i++)
  {
    for (ui j = 1; j <= n; j++)
    {
      if (j > 1)
      {
        cout << " ";
      }
      cout << g[i][j];
    }
    cout << endl;
  }

  return 0;
}