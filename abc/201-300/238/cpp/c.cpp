#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  ull ans = 0;
  ull d = 10;
  const ull div = 998244353;
  for (ui i = 0; i < to_string(n).length(); i++)
  {
    ull r = min(d - 1, n);
    if (i > 0)
      r = (r - (d / 10) + 1) % div;

    ans += ((r * (r + 1)) / 2) % div;

    d *= 10;
  }

  cout << ans % div << endl;
  return 0;
}