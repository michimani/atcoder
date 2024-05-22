#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<char, ui> c;
  string s(n, '.');
  for (auto &ss : s)
  {
    cin >> ss;
    c[ss]++;
  }

  ui ans = 0;
  for (ui i = 1; i < n - 1; i++)
  {
    map<char, bool> t;
    map<char, ui> tc = c;
    for (ui j = 0; j < i; j++)
    {
      tc[s[j]]--;
      if (tc[s[j]] > 0)
        t[s[j]] = true;
      else
        t.erase(s[j]);
    }

    ans = max(ans, ui(t.size()));
  }

  cout << ans << endl;

  return 0;
}