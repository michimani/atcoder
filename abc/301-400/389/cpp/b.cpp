#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull x;
  cin >> x;

  ull ans = 2;
  ull t = ans;
  while (t != x)
  {
    ans++;
    t = t * ans;
  }

  cout << ans << endl;

  return 0;
}