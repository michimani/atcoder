#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  ui q;
  cin >> q;

  ui cmd, i;
  ull x;
  map<ui, bool> changed;
  ull all = 0;
  bool all_changed = false;
  for (; q--;)
  {
    cin >> cmd;

    if (cmd == 1)
    {
      cin >> x;
      all = x;
      all_changed = true;
      changed = {};
    }
    else if (cmd == 2)
    {
      cin >> i >> x;
      if (all_changed && !changed[i - 1])
      {
        a[i - 1] = all;
        changed[i - 1] = true;
      }

      a[i - 1] += x;
    }
    else if (cmd == 3)
    {
      cin >> i;
      if (all_changed && !changed[i - 1])
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