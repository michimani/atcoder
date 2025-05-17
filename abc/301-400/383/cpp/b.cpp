#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, d;
  cin >> h >> w >> d;

  vector<string> s(h);
  for (ui i = 0; i < h; i++)
    cin >> s[i];

  ui ans = 0;
  for (ui i1 = 0; i1 < h; i1++)
  {
    for (ui j1 = 0; j1 < w; j1++)
    {
      if (s[i1][j1] == '#')
        continue;

      for (ui i2 = 0; i2 < h; i2++)
      {
        for (ui j2 = 0; j2 < w; j2++)
        {
          if (s[i2][j2] == '#' || (i1 == i2 && j1 == j2))
            continue;

          ui cnt = 2;
          for (ui i = 0; i < h; i++)
          {
            for (ui j = 0; j < w; j++)
            {
              if (s[i][j] == '#')
                continue;

              if (i == i1 && j == j1)
                continue;
              if (i == i2 && j == j2)
                continue;

              ui d1 = abs(int(i) - int(i1)) + abs(int(j) - int(j1));
              ui d2 = abs(int(i) - int(i2)) + abs(int(j) - int(j2));

              if (d1 <= d || d2 <= d)
                cnt++;
            }
          }
          ans = max(ans, cnt);
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}