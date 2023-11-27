#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  int k, x;
  cin >> n >> k >> x;

  vector<int> a(n, 0);
  unsigned long ans = 0;
  for (auto &aa : a)
  {
    cin >> aa;
    ans += aa;
  }

  sort(a.rbegin(), a.rend());

  unsigned int i = 0;
  while (k > 0 && i < n)
  {
    if (a[i] - x < 0)
    {
      i++;
      continue;
    }

    ans -= x;
    a[i] = a[i] - x;
    k--;
  }

  if (k == 0)
  {
    cout << ans << endl;
    return 0;
  }

  sort(a.rbegin(), a.rend());
  i = 0;
  while (k > 0 && i < n)
  {
    if (a[i] <= 0)
    {
      i++;
    }
    ans -= a[i];
    k--;
    a[i] = max(a[i] - x, 0);
  }

  cout << ans << endl;
}