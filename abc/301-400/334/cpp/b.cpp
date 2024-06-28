#include <iostream>

using namespace std;
using ull = unsigned long long;
using ll = long long;

int main()
{
  ll a, l, r;
  ull m;
  cin >> a >> m >> l >> r;

  l -= a;
  r -= a;

  a = 0;

  if (l <= a && a <= r && l < 0)
  {
    cout << r / m + abs(l) / m + 1 << endl;
  }
  else
  {
    if (r < a)
    {
      swap(l, r);
      l = abs(l);
      r = abs(r);
    }

    cout << r / m - l / m + ll(r % m == 0 && l % m == 0) << endl;
  }

  return 0;
}