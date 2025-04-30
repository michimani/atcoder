#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;
  vector<string> s(n);
  vector<string> t(m);

  for (auto &ss : s)
    cin >> ss;

  for (auto &tt : t)
    cin >> tt;

  bool ok = false;
  for (ui i = 0; i <= n - m; i++)
  {
    for (ui j = 0; j <= n - m; j++)
    {
      ok = true;
      for (ui l = 0; l < m && ok; l++)
        for (ui h = 0; h < m && ok; h++)
          ok = s[i + l][j + h] == t[l][h];

      if (ok)
      {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}