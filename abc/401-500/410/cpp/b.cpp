#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<ui> b(n, 0);
  ui x = 0;
  ui min = 0;
  ui min_idx = 0;
  string ans = "";
  for (ui i = 0; i < q; i++)
  {
    cin >> x;

    if (x > 0)
    {
      b[x - 1]++;
      ans += to_string(x) + " ";
      continue;
    }

    min = 101;
    min_idx = 0;
    for (ui i = 0; i < n; i++)
    {
      if (b[i] < min)
      {
        min = b[i];
        min_idx = i;
      }
    }

    b[min_idx]++;
    ans += to_string(min_idx + 1) + " ";
  }

  ans.pop_back();

  cout << ans << endl;

  return 0;
}