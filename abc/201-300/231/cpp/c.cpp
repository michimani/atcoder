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

    if (x > a[n - 1])
    {
      cout << 0 << endl;
      continue;
    }

    if (x <= a[0])
    {
      cout << n << endl;
      continue;
    }

    ui l = 0;
    ui r = n - 1;
    ui mid = 0;
    while (true)
    {
      mid = (l + r) / 2;
      if (a[mid] > x)
      {
        r = mid;
      }
      else if (a[mid] < x)
      {
        l = mid;
      }
      else
      {
        l = mid;
        break;
      }

      if (r - l == 1)
      {
        if (x > a[l])
        {
          l = r;
        }
        break;
      }
    }

    cout << n - l << endl;
  }

  return 0;
}