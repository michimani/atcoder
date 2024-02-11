#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (ui i = 0; i < n; i++)
    cin >> s[i];

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      bool ok = true;
      for (ui k = 0; k < m; k++)
      {
        if (s[i][k] == 'x' && s[j][k] == 'x')
        {
          ok = false;
          break;
        }
      }
      ans += ui(ok);
    }
  }

  cout << ans << endl;
  return 0;
}