#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  map<ui, ui> f;
  ui qu = 0, x = 0;
  for (; q--;)
  {
    cin >> qu;
    switch (qu)
    {
    case 1:
      cin >> x;
      f[x]++;
      break;
    case 2:
      cin >> x;
      f[x]--;
      if (f[x] == 0)
        f.erase(x);
      break;
    case 3:
      cout << f.size() << endl;
      break;
    default:
      // noop
    }
  }

  return 0;
}