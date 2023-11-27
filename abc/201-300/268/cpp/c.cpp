#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  int n;
  cin >> n;

  map<int, int> k_cnt;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    int k01 = (p + n - (i - 1)) % n;
    int k00 = (p + n - i) % n;
    int k11 = (p + n - (i + 1)) % n;

    k_cnt[k01]++;
    k_cnt[k00]++;
    k_cnt[k11]++;
  }

  int ans = 0;
  auto iter = k_cnt.begin();
  while (iter != k_cnt.end())
  {
    ans = max(ans, iter->second);
    iter++;
  }

  cout << ans << endl;
  return 0;
}