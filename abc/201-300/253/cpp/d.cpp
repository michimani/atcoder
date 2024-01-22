#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n, a, b;
  cin >> n >> a >> b;

  ull mn = min(a, b);
  ull mx = max(a, b);

  ull ans = (1 + n) * n / 2;
  for (ull i = mn; i <= n; i += mn)
  {
    ans -= i;
  }

  if (mn != mx)
  {
    for (ull j = mx; j <= n; j += mx)
    {
      ans -= j * ull(j % mn != 0);
    }
  }

  cout << ans << endl;
  return 0;
}