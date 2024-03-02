#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<ui>> a(n, vector<ui>(n, 0));
  for (auto &r : a)
    for (auto &aa : r)
      cin >> aa;

  for (ui i = 0; i < n; i++)
  {
    string ans = "";
    for (ui j = 0; j < n; j++)
    {
      if (a[i][j] == 1)
        ans += to_string(j + 1) + " ";
    }

    if (ans.length() == 0)
    {
      cout << endl;
      continue;
    }

    ans.pop_back();
    cout << ans << endl;
  }

  return 0;
}