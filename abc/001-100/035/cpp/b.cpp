#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  ui t;
  cin >> s >> t;

  int x = 0, y = 0;
  int q = 0;

  for (auto &c : s)
  {
    switch (c)
    {
    case 'L':
      x--;
      break;

    case 'R':
      x++;
      break;

    case 'U':
      y++;
      break;

    case 'D':
      y--;
      break;

    default:
      q++;
      break;
    }
  }

  switch (t)
  {
  case 1:
    cout << abs(x) + abs(y) + q << endl;
    break;

  case 2:
    if (abs(x) + abs(y) >= q)
      cout << abs(x) + abs(y) - q << endl;
    else
      cout << (q - (abs(x) + abs(y))) % 2 << endl;
    break;

  default:
    // noop
    break;
  }

  return 0;
}