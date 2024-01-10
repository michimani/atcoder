#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> g(n, string(n, '.'));
  for (auto &r : g)
  {
    cin >> r;
  }

  char lt = g[0][0];
  for (ui r = 0; r < n - 1; r++)
  {
    g[r][0] = g[r + 1][0];
  }
  for (ui c = 0; c < n - 1; c++)
  {
    g[n - 1][c] = g[n - 1][c + 1];
  }
  for (ui r = 0; r < n - 1; r++)
  {
    g[n - 1 - r][n - 1] = g[n - 1 - (r + 1)][n - 1];
  }
  for (ui c = 0; c < n - 2; c++)
  {
    g[0][n - 1 - c] = g[0][(n - 1 - c) - 1];
  }

  g[0][1] = lt;

  for (auto &r : g)
  {
    for (auto &c : r)
    {
      cout << c;
    }
    cout << endl;
  }

  return 0;
}