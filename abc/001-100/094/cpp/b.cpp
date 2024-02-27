#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m, x;
  cin >> n >> m >> x;

  vector<ui> a(n, 0);
  for (; m--;)
  {
    ui ai;
    cin >> ai;
    a[ai - 1] = 1;
  }

  ui f = 0, b = 0;
  for (ui i = 0; i < n; i++)
  {
    if (i + 1 < x)
      f += a[i];
    else if (i + 1 > x)
      b += a[i];
  }

  cout << min(f, b) << endl;
  return 0;
}