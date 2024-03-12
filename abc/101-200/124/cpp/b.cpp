#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  ui mx = 0;
  for (; n--;)
  {
    ui h;
    cin >> h;

    ans += ui(h >= mx);
    mx = max(mx, h);
  }

  cout << ans << endl;
  return 0;
}