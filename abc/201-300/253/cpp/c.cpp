#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  map<ui, ui> s;
  ui mx = 0, mn = 0;
  for (ui i = 0; i < q; i++)
  {
    ui cmd, x, c;
    cin >> cmd;

    switch (cmd)
    {
    case 1:
      cin >> x;
      s[x]++;
      break;

    case 2:
      cin >> x >> c;
      s[x] -= min(c, s[x]);
      if (s[x] == 0)
      {
        s.erase(x);
      }
      break;

    case 3:
      mn = s.begin()->first;
      mx = s.rbegin()->first;
      cout << mx - mn << endl;
      break;

    default:
      // noop
      break;
    }
  }

  return 0;
}