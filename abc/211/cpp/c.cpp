#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s;
  cin >> s;

  string t = "chokudai";
  unsigned int mod = 1000000007;
  unsigned int n = (unsigned int)(s.size());

  vector dp(n + 1, vector<unsigned int>(9, 0));
  for (unsigned int i = 0; i <= n; i++)
  {
    dp[i][0] = 1;
  }

  for (unsigned int i = 0; i < n; i++)
    for (unsigned int j = 0; j < 8; j++)
    {
      {
        if (s[i] != t[j])
        {
          dp[i + 1][j + 1] = dp[i][j + 1];
        }
        else
        {
          dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % mod;
        }
      }
    }

  cout << dp[n][8] << endl;
  return 0;
}