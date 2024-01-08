#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n, a, b;
  cin >> n >> a >> b;

  if (a == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  if (b == 0)
  {
    cout << n << endl;
    return 0;
  }

  ull ans = (n / (a + b)) * a;
  ull r = n % (a + b);
  if (r > 0)
  {
    ans += min(a, r);
  }

  cout << ans << endl;

  return 0;
}