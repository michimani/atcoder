#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n, k;
  cin >> n >> k;

  ull ans = 1;
  ull limit = pow(10, k);

  for (ull i = 0; i < n; i++)
  {
    ull a;
    cin >> a;

    if (a > 0 && ans > limit / a)
      ans = 1;
    else
      ans *= a;

    if (ans >= limit)
      ans = 1;
  }

  cout << (ans >= limit ? 1 : ans) << endl;

  return 0;
}