#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <functional>

using namespace std;

struct State
{
  int solved;
  int money;
};

int main()
{

  int n, x;
  cin >> n >> x;

  vector<int> s(n), c(n), p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i] >> c[i] >> p[i];
  }

  vector<vector<double>> dp(1 << n, vector<double>(x + 1, -1));

  function<double(int, int)> solve = [&](int solved, int money)
  {
    if (dp[solved][money] >= 0)
      return dp[solved][money];

    double ret = 0;

    for (int i = 0; i < n; i++)
    {

      if (solved & (1 << i))
        continue;

      if (money < c[i])
        continue;

      double pp = p[i] / 100.0;

      double ev_success = solve(solved | (1 << i), money - c[i]) + s[i];
      double ev_failure = solve(solved, money - c[i]);

      double ev = pp * ev_success + (1 - pp) * ev_failure;

      ret = max(ret, ev);
    }

    return dp[solved][money] = ret;
  };

  double ans = solve(0, x);

  cout << fixed << setprecision(15) << ans << endl;

  return 0;
}
