#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

bool yes(vector<string> &g, ui i, ui j)
{
  ui c = ui(g[i - 1][j] == '#') + ui(g[i + 1][j] == '#') + ui(g[i][j - 1] == '#') + ui(g[i][j + 1] == '#');
  return c == 2 || c == 4;
}

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<string> g(h + 2, string(w + 2, '-'));
  string s;
  for (ui i = 1; i <= h; i++)
  {
    cin >> s;
    s = '-' + s + '-';
    g[i] = s;
  }

  for (ui i = 1; i <= h; i++)
  {
    for (ui j = 1; j <= w; j++)
    {
      if (g[i][j] != '#')
        continue;

      if (!yes(g, i, j))
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}