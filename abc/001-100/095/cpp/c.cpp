#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  ui ans = a * x + b * y;

  ui ans_tmp = c * min(x, y) * 2;
  if (y < x)
    ans_tmp += a * (x - y);
  else if (x < y)
    ans_tmp += b * (y - x);

  ans = min(ans, ans_tmp);

  ans_tmp = c * max(x, y) * 2;
  ans = min(ans, ans_tmp);

  cout << ans << endl;
  return 0;
}