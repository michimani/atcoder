#include <iostream>

using namespace std;

int main()
{
  int n, x, t;
  cin >> n >> x >> t;

  int ans = 0;
  while (n > 0)
  {
    ans += t;
    n -= x;
  }

  cout << ans << endl;
  return 0;
}