#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  bool out = false;
  unordered_map<ui, bool> changed;
  vector<ui> a(n, 0);
  ui z = 0;
  ui c = 0, p = 0, x = 0;
  ui org_idx = 0;
  for (; q--;)
  {
    cin >> c;

    switch (c)
    {
    case 1:
      cin >> p >> x;
      org_idx = (p - 1 + n + z) % n;
      a[org_idx] = x;
      changed[org_idx] = true;
      break;

    case 2:
      cin >> p;
      org_idx = (p - 1 + n + z) % n;
      if (changed[org_idx])
        cout << a[org_idx] << endl;
      else
        cout << org_idx + 1 << endl;

      out = true;
      break;

    case 3:
      cin >> p;
      z = (z + p) % n;
      break;

    default:
      // noop
      break;
    }
  }

  if (!out)
    cout << endl;

  return 0;
}