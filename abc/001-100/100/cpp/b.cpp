#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull d, n;
  cin >> d >> n;

  ull base = 1;
  for (; d--;)
    base *= 100;

  ull ans = base * n;
  if (ans % (base * 100) == 0)
    ans += base;

  cout << ans << endl;
  return 0;
}