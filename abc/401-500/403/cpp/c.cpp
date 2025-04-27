#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n, m, q;
  cin >> n >> m >> q;

  map<ui, map<ui, bool>> r;
  ui a, b, c;
  for (; q--;)
  {
    cin >> a;

    switch (a)
    {
    case 1:
      cin >> b >> c;
      r[b][c] = true;
      break;

    case 2:
      cin >> b;
      r[b][0] = true;
      break;

    case 3:
      cin >> b >> c;
      if (r.count(b) > 0 && (r[b][0] || r[b][c]))
        cout << "Yes" << endl;
      else
        cout << "No" << endl;

      break;

    default:
      // noop
    }
  }

  return 0;
}