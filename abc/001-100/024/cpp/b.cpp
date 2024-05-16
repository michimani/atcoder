#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  ull t;
  cin >> n >> t;

  ull ans = t;
  vector<ull> a(n, 0);
  cin >> a[0];
  for (ui i = 1; i < n; i++)
  {
    cin >> a[i];
    if (a[i] - a[i - 1] >= t)
      ans += t;
    else
      ans += a[i] - a[i - 1];
  }

  cout << ans << endl;
  return 0;
}