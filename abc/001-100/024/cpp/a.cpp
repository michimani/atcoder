#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, k;
  cin >> a >> b >> c >> k;

  ui s, t;
  cin >> s >> t;

  ui ans = a * s + b * t;
  if (s + t >= k)
    ans -= c * (s + t);

  cout << ans << endl;
  return 0;
}