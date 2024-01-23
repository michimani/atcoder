#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull a, k;
  cin >> a >> k;

  const ull m = 2000000000000;

  if (k == 0)
  {
    cout << m - a << endl;
    return 0;
  }

  ull ans = 1;
  while (a * (k + 1) + 1 < m)
  {
    a = (1 + k) * a + 1;
    ans++;
  }

  cout << ans << endl;
  return 0;
}