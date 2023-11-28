#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  unsigned long long n, m;
  cin >> n >> m;

  vector<unsigned long long> dp(n + 1, 0);
  map<unsigned long long, bool> halls;
  unsigned long long prev_a = 0;
  for (unsigned long long i = 0; i < m; i++)
  {
    unsigned long long a;
    cin >> a;

    if (prev_a > 0 && a - prev_a == 1)
    {
      cout << 0 << endl;
      return 0;
    }

    prev_a = a;
    halls[a] = true;
  }

  const unsigned long long div = 1000000007;
  for (unsigned long long i = 1; i <= n; i++)
  {
    if (halls.count(i) > 0)
    {
      dp[i] = 0;
      continue;
    }

    if (i == 1)
    {
      dp[i] = 1;
      continue;
    }
    else if (i == 2)
    {
      dp[i] = dp[1] == 0 ? 1 : 2;
      continue;
    }

    unsigned long long p = dp[i - 1] + dp[i - 2];
    p = p % div;

    dp[i] = p;
  }

  cout << dp[n] << endl;

  return 0;
}
