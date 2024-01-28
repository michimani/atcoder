#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> q(n, 0);
  for (auto &qq : q)
  {
    cin >> qq;
  }

  const ui mx = 10000000;

  ui ac = mx;
  vector<ui> a(n, 0);
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > 0)
    {
      ac = min(ac, q[i] / a[i]);
    }
  }

  ui bc = mx;
  vector<ui> b(n, 0);
  for (ui i = 0; i < n; i++)
  {
    cin >> b[i];
    if (b[i] > 0)
    {
      bc = min(bc, q[i] / b[i]);
    }
  }

  ui ans = 0;
  for (ui acc = ac + 1; acc > 0; acc--)
  {
    ui bcc = bc;
    for (ui i = 0; i < n; i++)
    {
      if (q[i] - (a[i] * (acc - 1)) < b[i])
      {
        bcc = 0;
        break;
      }

      if (b[i] > 0)
      {
        bcc = min(bcc, (q[i] - (a[i] * (acc - 1))) / b[i]);
      }
    }
    ans = max(ans, (acc - 1) + bcc);
  }

  cout << ans << endl;
  return 0;
}