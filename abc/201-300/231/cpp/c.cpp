#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<ui> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  sort(a.begin(), a.end());

  for (ui i = 0; i < q; i++)
  {
    ui x;
    cin >> x;

    ui l = 0;
    ui r = n;
    ui mid = 0;
    while (r - l > 1)
    {
      mid = (l + r) / 2;
      if (a[mid] >= x)
      {
        r = mid;
      }
      else if (a[mid] < x)
      {
        l = mid;
      }
    }

    ui ans = x > a[l] ? n - r : n - l;

    cout << ans << endl;
  }

  return 0;
}