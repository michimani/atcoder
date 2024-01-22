#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n, a, b;
  cin >> n >> a >> b;

  if (a == 1 || b == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  ull mn = min(a, b);
  ull mx = max(a, b);
  ull i = mn;
  ull j = mx;

  ull ans = (1 + n) * n / 2;
  while (i <= n)
  {
    ans -= i;
    i += mn;
  }

  while (j <= n)
  {
    ans -= j * ull(j % mn != 0);
    j += mx;
  }

  cout << ans << endl;
  return 0;
}