#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m, k;
  cin >> n >> m >> k;

  vector<ui> p(n);

  ui a = 0, b = 0;
  string ans = "";
  map<ui, bool> e = {};
  for (; k--;)
  {
    cin >> a >> b;
    p[a - 1]++;
    if (p[a - 1] == m && !e[a])
    {
      ans += to_string(a) + " ";
      e[a] = true;
    }
  }

  if (ans.length() > 0)
    ans.pop_back();

  cout << ans << endl;

  return 0;
}