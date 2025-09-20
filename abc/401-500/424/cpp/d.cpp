#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int h, w;
    cin >> h >> w;

    vector<string> g(h);
    for (int i = 0; i < h; i++)
      cin >> g[i];

    vector<vector<int>> dp(h + 1, vector<int>(1 << w, 1e9));
    dp[0][0] = 0;

    for (int i = 0; i < h; i++)
    {
      for (int prev_mask = 0; prev_mask < (1 << w); prev_mask++)
      {
        if (dp[i][prev_mask] == 1e9)
          continue;

        for (int cur_mask = 0; cur_mask < (1 << w); cur_mask++)
        {
          int changes = 0;
          bool valid = true;

          for (int j = 0; j < w; j++)
          {
            if (g[i][j] == '#' && !(cur_mask & (1 << j)))
              changes++;
          }

          if (i > 0)
          {
            for (int j = 0; j < w - 1; j++)
            {
              bool tl = (prev_mask & (1 << j)) != 0;
              bool tr = (prev_mask & (1 << (j + 1))) != 0;
              bool bl = (cur_mask & (1 << j)) != 0;
              bool br = (cur_mask & (1 << (j + 1))) != 0;

              if (tl && tr && bl && br)
              {
                valid = false;
                break;
              }
            }
          }

          if (valid)
            dp[i + 1][cur_mask] = min(dp[i + 1][cur_mask], dp[i][prev_mask] + changes);
        }
      }
    }

    int ans = 1e9;
    for (int mask = 0; mask < (1 << w); mask++)
      ans = min(ans, dp[h][mask]);

    cout << ans << endl;
  }

  return 0;
}
