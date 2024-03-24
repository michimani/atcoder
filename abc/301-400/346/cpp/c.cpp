#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  ull k;
  cin >> n >> k;

  ull ans = ((1 + k) * k) / 2;
  map<ull, bool> m;
  for (; n--;)
  {
    ull a;
    cin >> a;
    if (a <= k && !m[a])
    {
      ans -= a;
      m[a] = true;
    }
  }

  cout << ans << endl;
  return 0;
}