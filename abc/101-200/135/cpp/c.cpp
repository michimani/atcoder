#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> a(n + 1, 0);
  for (auto &aa : a)
    cin >> aa;

  ull ans = 0;
  for (ui i = 0; i < n; i++)
  {
    ull b;
    cin >> b;

    if (a[i] >= b)
    {
      ans += b;
    }
    else
    {
      ans += a[i];
      b -= a[i];
      if (a[i + 1] >= b)
      {
        ans += b;
        a[i + 1] -= b;
      }
      else
      {
        ans += a[i + 1];
        a[i + 1] = 0;
      }
    }
  }

  cout << ans << endl;
  return 0;
}