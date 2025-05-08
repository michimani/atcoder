#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> g(n, string(n, '.'));

  if (n == 1)
  {
    cout << '#' << endl;
    return 0;
  }

  for (ui i = 0; i < n; i++)
  {
    g[0][i] = '#';
    g[n - 1][i] = '#';
    g[i][0] = '#';
    g[i][n - 1] = '#';
  }

  for (ui i = 2; i < n - 2; i += 2)
  {
    for (ui j = 2; j < n - 2; j++)
    {
      if (i <= j && j <= n - 1 - i)
      {
        g[i][j] = '#';
        g[n - 1 - i][j] = '#';
        g[j][i] = '#';
        g[j][n - 1 - i] = '#';
      }
    }
  }

  for (const auto &r : g)
    cout << r << endl;

  return 0;
}