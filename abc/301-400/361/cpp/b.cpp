#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  ui g, h, i, j, k, l;
  cin >> g >> h >> i >> j >> k >> l;

  bool x_intersection = max(a, g) < min(d, j);
  bool y_intersection = max(b, h) < min(e, k);
  bool z_intersection = max(c, i) < min(f, l);

  cout << (x_intersection && y_intersection && z_intersection ? "Yes" : "No") << endl;

  return 0;
}