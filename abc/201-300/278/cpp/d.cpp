#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  vector<ll> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  ui q;
  cin >> q;

  ui cmd, i;
  ll x;
  map<ui, bool> changed;
  ll all = -1;
  for (; q--;)
  {
    cin >> cmd;

    if (cmd == 1)
    {
      cin >> x;
      all = x;
      changed = {};
    }
    else if (cmd == 2)
    {
      cin >> i >> x;
      if (all >= 0 && !changed[i - 1])
      {
        a[i - 1] = all;
        changed[i - 1] = true;
      }

      a[i - 1] += x;
    }
    else if (cmd == 3)
    {
      cin >> i;
      if (all >= 0 && !changed[i - 1])
      {
        a[i - 1] = all;
        changed[i - 1] = true;
      }
      cout << a[i - 1] << endl;
    }
    else
    {
      //  noop
    }
  }

  return 0;
}