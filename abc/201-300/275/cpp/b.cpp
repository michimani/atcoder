#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  const ull x = 998244353;

  a = a % x;
  b = b % x;
  c = c % x;
  d = d % x;
  e = e % x;
  f = f % x;

  ull A = (((a * b) % x) * c) % x;
  ull B = (((d * e) % x) * f) % x;

  cout << (A >= B ? (A - B) % x : ((A + x) - B) % x) << endl;

  return 0;
}