#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> t(5, 0);
  for (auto &tt : t)
    cin >> tt;

  ui ans = 130 * 5;
  do
  {
    ui ta = 0;
    for (ui i = 1; i <= 5; i++)
    {
      ui tt = t[i - 1];
      if (i < 5 && tt % 10 != 0)
        tt += ((tt / 10 + 1) * 10 - tt);

      ta += tt;
    }

    ans = min(ans, ta);
  } while (next_permutation(t.begin(), t.end()));

  cout << ans << endl;

  return 0;
}