#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n, a, b;
  cin >> n >> a >> b;

  ull ans = (1 + n) * n / 2;
  for (ull i = a; i <= n; i += a)
  {
    ans -= i;
  }

  if (a != b)
  {
    for (ull j = b; j <= n; j += b)
    {
      ans -= j * ull(j % a != 0);
    }
  }

  cout << ans << endl;
  return 0;
}