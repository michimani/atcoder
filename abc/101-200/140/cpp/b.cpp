#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n, 0);
  vector<ui> b(n, 0);
  vector<ui> c(n, 0);

  for (ui i = 0; i < n; i++)
    cin >> a[i];

  for (ui i = 0; i < n; i++)
    cin >> b[i];

  for (ui i = 0; i < n - 1; i++)
    cin >> c[i];

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    if (i > 0 && a[i - 1] + 1 == a[i])
    {
      ans += c[a[i - 1] - 1];
    }
    ans += b[a[i] - 1];
  }

  cout << ans << endl;
  return 0;
}