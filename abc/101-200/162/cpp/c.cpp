#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b, ull c)
{
  ull res = 1;
  for (ull i = 1; i <= min(a, min(b, c)); i++)
  {
    if (a % i == 0 && b % i == 0 && c % i == 0)
      res = i;
  }
  return res;
}

int main()
{
  ull k;
  cin >> k;

  ull ans = 0;
  for (ull a = 1; a <= k; a++)
    for (ull b = 1; b <= k; b++)
      for (ull c = 1; c <= k; c++)
        ans += gcd(a, b, c);

  cout << ans << endl;
  return 0;
}