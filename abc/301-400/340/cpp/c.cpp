#include <iostream>
#include <map>

using namespace std;
using ull = unsigned long long;

ull calc(ull x, map<ull, ull> &m)
{
  if (x <= 1)
    return 0;

  ull s = x;
  if (m.count(x) > 0)
    return s + m[x];

  ull res = 0;
  if (x % 2 == 0)
    res = 2 * calc(x / 2, m);
  else
    res = calc(x / 2, m) + calc(x / 2 + 1, m);

  m[x] = res;

  return s + res;
}

int main()
{
  ull n;
  cin >> n;

  map<ull, ull> m;
  ull ans = calc(n, m);

  cout << ans << endl;
  return 0;
}