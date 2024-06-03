#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k, q;
  cin >> n >> k >> q;

  vector<ui> m(n, 0);
  map<ui, ui> km;
  for (ui i = 1; i <= k; i++)
  {
    ui a;
    cin >> a;
    m[a - 1] = i;
    km[i] = a - 1;
  }

  for (ui j = 0; j < q; j++)
  {
    ui l;
    cin >> l;

    if (km[l] != n - 1 && m[km[l] + 1] == 0)
    {
      swap(m[km[l]], m[km[l] + 1]);
      km[l] = km[l] + 1;
    }
  }

  string ans = "";
  for (ui i = 1; i <= n; i++)
  {
    if (m[i - 1] != 0)
      ans += to_string(i) + " ";
  }

  ans.pop_back();
  cout << ans << endl;

  return 0;
}