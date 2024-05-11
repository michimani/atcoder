#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

auto comp(pair<ull, ull> &l, pair<ull, ull> &r) -> bool
{
  return (l.second - l.first) < (r.second - r.first);
}

int main()
{
  ui n;
  cin >> n;

  vector<pair<ull, ull>> ab(n);
  for (auto &c : ab)
    cin >> c.first >> c.second;

  sort(ab.begin(), ab.end(), comp);

  ull ans = ab[0].first;
  for (ui i = 1; i < n; i++)
    ans += ab[i].first;
  ans += (ab[n - 1].second - ab[n - 1].first);

  cout << ans << endl;
  return 0;
}