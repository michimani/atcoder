#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;

  int min_cnt = 100;
  vector<vector<int>> grid(h, vector<int>(w, 0));
  for (auto &hh : grid)
  {
    for (auto &a : hh)
    {
      cin >> a;
      min_cnt = min(min_cnt, a);
    }
  }

  int ans = 0;

  for (auto &hh : grid)
  {
    for (auto &a : hh)
    {
      ans += a - min_cnt;
    }
  }

  cout << ans << endl;

  return 0;
}