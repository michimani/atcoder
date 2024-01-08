#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ul = unsigned long;

struct Ice
{
  ui f;
  ul s;
};

bool comp(Ice &l, Ice &r)
{
  return l.s < r.s;
}

int main()
{
  ui n;
  cin >> n;

  vector<Ice> cups(n);
  for (auto &ice : cups)
  {
    ui f;
    ul s;
    cin >> f >> s;
    ice.f = f;
    ice.s = s;
  }

  sort(cups.rbegin(), cups.rend(), comp);

  ul ans = 0;
  ans = cups[0].s + cups[1].s;
  if (cups[0].f == cups[1].f)
  {
    ans -= cups[1].s / 2;
    for (ui i = 2; i < n; i++)
    {
      if (cups[0].f != cups[i].f)
      {
        ans = max(ans, cups[0].s + cups[i].s);
        break;
      }
    }
  }

  cout << ans << endl;
}