#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> a(n, string(n, '.'));
  for (auto &ar : a)
    cin >> ar;

  vector<string> b(m, string(m, '.'));
  for (auto &br : b)
    cin >> br;

  for (ui di = 0; di < n - m + 1; di++)
  {
    for (ui dj = 0; dj < n - m + 1; dj++)
    {
      bool ok = true;
      for (ui i = 0; i < m; i++)
      {
        for (ui j = 0; j < m; j++)
        {
          if (a[i + di][j + dj] != b[i][j])
          {
            ok = false;
            break;
          }
        }

        if (!ok)
          break;
      }

      if (ok)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}