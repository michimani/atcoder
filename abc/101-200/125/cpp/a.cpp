#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, t;
  cin >> a >> b >> t;

  ui ans = 0;
  ui ct = a;
  while (ct < t + 1)
  {
    ans += b;
    ct += a;
  }

  cout << ans << endl;

  return 0;
}