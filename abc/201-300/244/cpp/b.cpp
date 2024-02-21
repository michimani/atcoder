#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  int x = 0, y = 0;
  int dx = 1, dy = 0;
  for (; n--;)
  {
    char t;
    cin >> t;

    switch (t)
    {
    case 'S':
      x += dx;
      y += dy;
      break;

    case 'R':
      if (dx == 1)
      {
        dx = 0;
        dy = -1;
      }
      else if (dx == -1)
      {
        dx = 0;
        dy = 1;
      }
      else if (dy == 1)
      {
        dx = 1;
        dy = 0;
      }
      else
      {
        dx = -1;
        dy = 0;
      }
    default:
      // noop
      break;
    }
  }

  cout << x << " " << y << endl;
  return 0;
}