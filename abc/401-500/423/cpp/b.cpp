#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> r;
  vector<bool> l(n, false);
  ui ln = 0;
  for (ui i = 0; i < n; i++)
  {
    cin >> ln;
    l[i] = bool(ln);
    r[i] = true;
  }

  r.erase(0);

  bool o = false;
  bool fs = false, bs = false;
  for (ui i = 0; i < n; i++)
  {
    o = false;
    if (!l[i] && !fs)
    {
      o = true;
      r.erase(i + 1);
    }
    else
    {
      fs = true;
    }

    if (!l[n - i - 1] && !bs)
    {
      o = true;
      r.erase(n - i - 1);
    }
    else
    {
      bs = true;
    }

    if (!o)
      break;
  }

  cout << r.size() << endl;

  return 0;
}