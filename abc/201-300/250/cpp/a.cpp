#include <iostream>

using namespace std;

int main()
{
  int h, w, r, c;
  cin >> h >> w >> r >> c;

  int ans = 0;
  if (1 < r && r < h)
  {
    ans += 2;
  }
  else if (h > 1 && (r == 1 || r == h))
  {
    ans += 1;
  }

  if (1 < c && c < w)
  {
    ans += 2;
  }
  else if (w > 1 && (c == 1 || c == w))
  {
    ans += 1;
  }

  cout << ans << endl;
  return 0;
}