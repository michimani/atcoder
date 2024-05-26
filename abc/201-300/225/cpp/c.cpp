#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<vector<int>> g(n, vector<int>(m, 0));
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < m; j++)
    {
      cin >> g[i][j];
      if ((i > 0 && g[i][j] - g[i - 1][j] != 7) ||
          (j > 0 && (g[i][j] + 6) % 7 - (g[i][j - 1] + 6) % 7 != 1))
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}