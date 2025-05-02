#include <iostream>
#include <cmath>
#include <unordered_set>

using namespace std;
using ui = unsigned int;
using uius = unordered_set<ui>;

int main()
{
  ui n, m;
  cin >> n >> m;
  uius a;

  ui am;
  for (; m--;)
  {
    cin >> am;
    a.insert(am);
  }

  string ans = "";
  ui c = 0;
  for (ui i = 1; i <= n; i++)
  {
    if (!a.contains(i))
    {
      ans += to_string(i) + " ";
      c++;
    }
  }

  if (c > 0)
    ans.pop_back();

  cout << c << endl;
  cout << ans << endl;

  return 0;
}