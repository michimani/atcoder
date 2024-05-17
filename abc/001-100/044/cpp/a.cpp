#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k, x, y;
  cin >> n >> k >> x >> y;

  ui ans = min(n, k) * x;
  if (n >= k)
    ans += (n - k) * y;

  cout << ans << endl;
  return 0;
}