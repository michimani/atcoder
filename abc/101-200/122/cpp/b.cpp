#include <iostream>
#include <set>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  set<char> r = {'A', 'C', 'T', 'G'};

  ui ans = 0;
  for (ui i = 0; i < s.length(); i++)
  {
    ui t = 0;
    for (ui j = i; j < s.length(); j++)
    {
      if (!r.contains(s[j]))
        break;
      t++;
    }

    ans = max(ans, t);
  }

  cout << ans << endl;

  return 0;
}