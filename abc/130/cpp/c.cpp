#include <iostream>
#include <cmath>

using namespace std;

long double calc(long double w, long double h, long double x, long double y)
{
  long double t = max(h - y, y) / (max(w - x, x) / min(w - x, x));
  long double s = (min(h - y, y) - t + min(h - y, y) + max(w - x, x) / min(w - x, x) * t) / 2 * w;

  return s;
}

int main()
{
  long double w, h, x, y;
  cin >> w >> h >> x >> y;

  if (x == 0 || y == 0 || x == w || y == h)
  {
    cout << (w * h / 2.0) << " " << 0 << endl;
    return 0;
  }

  if (2 * long(x) == long(w) || 2 * long(y) == long(h))
  {
    cout << (w * h / 2.0) << " " << int(2 * long(x) == long(w) && 2 * long(y) == long(h)) << endl;
    return 0;
  }

  if (w == h)
  {
    cout << (w * h / 2.0) << " " << 0 << endl;
    return 0;
  }

  long double ans = 0.0;
  if (h < w)
  {
    ans = calc(w, h, x, y);
  }
  else
  {
    ans = calc(h, w, y, x);
  }

  cout << ans << " " << int(h == w && x == y) << endl;
}