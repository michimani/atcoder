#include <vector>
#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

struct Jump
{
  ui a, b;
};

int main()
{
  ui n, x;
  cin >> n >> x;

  vector<Jump> jv(n);
  for (auto &j : jv)
  {
    cin >> j.a >> j.b;
  }

  vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));
  dp[0][0] = true;

  for (ui i = 0; i < n; ++i)
  {
    for (ui j = 0; j <= x; ++j)
    {
      if (dp[i][j])
      {
        if (j + jv[i].a <= x)
        {
          dp[i + 1][j + jv[i].a] = true;
        }
        if (j + jv[i].b <= x)
        {
          dp[i + 1][j + jv[i].b] = true;
        }
      }
    }
  }

  if (dp[n][x])
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}