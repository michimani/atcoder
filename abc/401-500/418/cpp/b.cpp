#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ld = long double;

ld v(string t)
{
  if (t.length() < 3 || t[0] != 't' || t[0] != t[t.length() - 1])
    return 0;

  ui c = 0;
  for (auto &cc : t)
    c += ui(cc == t[0]);

  return (ld(c) - 2.00) / ld(t.length() - 2);
}

int main()
{
  string s;
  cin >> s;

  ld mx = 0;
  for (size_t i = 0; i < s.length(); ++i)
  {
    for (size_t j = i + 3; j <= s.length(); ++j)
    {
      string sub = s.substr(i, j - i);
      mx = max(mx, v(sub));
    }
  }

  cout << fixed << setprecision(10) << mx << endl;

  return 0;
}