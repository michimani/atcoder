#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  map<ui, ui> bc;
  ui c = 0, x = 0;
  for (; q--;)
  {
    cin >> c;

    switch (c)
    {
    case 1:
      cin >> x;
      bc[x]++;

      break;

    case 2:
      x = bc.begin()->first;
      cout << x << endl;

      bc[x]--;
      if (bc[x] == 0)
        bc.erase(x);
      break;

    default:
      // noop
      break;
    }
  }

  return 0;
}