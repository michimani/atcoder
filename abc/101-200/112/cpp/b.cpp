#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, t;
  cin >> n >> t;

  ui ans = 1000;
  bool tle = true;
  for (; n--;)
  {
    ui c, tt;
    cin >> c >> tt;
    if (tt > t)
      continue;

    tle = false;
    ans = min(ans, c);
  }

  if (tle)
    cout << "TLE" << endl;
  else
    cout << ans << endl;

  return 0;
}