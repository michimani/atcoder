#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull k, s;
  cin >> k >> s;

  ull ans = 0;

  for (ull x = 0; x <= k; x++)
    for (ull y = 0; y <= k; y++)
      for (ull z = 0; z <= k; z++)
        ans += ull(x + y + z == s);

  cout << ans << endl;

  return 0;
}