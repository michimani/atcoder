#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  ull a2sum = 0;
  ll asum = 0;
  for (ui i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    a2sum += ull(a * a);
    asum += a;
  }

  ull ans = ull(n) * a2sum - ull(asum * asum);

  cout << ans << endl;
  return 0;
}

// https://atcoder.jp/contests/abc194/editorial/826