#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, l, r;
  cin >> n >> l >> r;

  ui x, y;
  ui ans = 0;
  for (; n--;)
  {
    cin >> x >> y;

    ans += ui(x <= l && r <= y);
  }

  cout << ans << endl;

  return 0;
}