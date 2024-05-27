#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

bool comp(pair<ull, ull> &l, pair<ull, ull> &r)
{
  if (l.first != r.first)
    return l.first > r.first;

  return l.second > r.second;
}

int main()
{
  ui n;
  ull w;
  cin >> n >> w;

  vector<pair<ull, ull>> ab(n);
  for (auto &c : ab)
    cin >> c.first >> c.second;

  sort(ab.begin(), ab.end(), comp);

  ull ans = 0;
  for (auto &c : ab)
  {
    if (w >= c.second)
    {
      ans += c.first * c.second;
      w -= c.second;
    }
    else
    {
      ans += c.first * w;
      w = 0;
    }

    if (w == 0)
      break;
  }

  cout << ans << endl;

  return 0;
}