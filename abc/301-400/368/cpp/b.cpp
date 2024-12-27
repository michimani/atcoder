#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  ui ans = 0;
  sort(a.rbegin(), a.rend());
  while (!(a[0] == 0 || a[1] == 0))
  {
    a[0] = a[0] > 0 ? a[0] - 1 : 0;
    a[1] = a[1] > 0 ? a[1] - 1 : 0;
    sort(a.rbegin(), a.rend());
    ans++;
  }

  cout << ans << endl;

  return 0;
}