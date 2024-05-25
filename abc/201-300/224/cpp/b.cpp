#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<vector<ui>> g(h, vector<ui>(w, 0));
  for (auto &b : g)
    for (auto &a : b)
      cin >> a;

  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      for (ui ii = i + 1; ii < h; ii++)
      {
        for (ui jj = j + 1; jj < w; jj++)
        {
          if (g[i][j] + g[ii][jj] > g[ii][j] + g[i][jj])
          {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}