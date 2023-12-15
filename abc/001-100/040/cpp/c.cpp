#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<int> pillar(n, 0);
  vector<int> dp(n, 0);

  int a0;
  cin >> a0;
  pillar[0] = a0;

  for (unsigned int i = 1; i < n; i++)
  {
    int a;
    cin >> a;

    pillar[i] = a;

    if (i < 2)
    {
      dp[i] = dp[i - 1] + abs(pillar[i] - pillar[i - 1]);
    }
    else
    {
      dp[i] = min(dp[i - 1] + abs(pillar[i] - pillar[i - 1]), dp[i - 2] + abs(pillar[i] - pillar[i - 2]));
    }
  }

  cout << dp[n - 1] << endl;
  return 0;
}