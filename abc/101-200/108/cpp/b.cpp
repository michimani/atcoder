#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  if (x1 == x2)
    if (y1 < y2)
      cout << x2 - abs(y1 - y2) << " " << y2 << " " << x2 - abs(y1 - y2) << " " << y1 << endl;
    else
      cout << x2 + abs(y1 - y2) << " " << y2 << " " << x2 + abs(y1 - y2) << " " << y1 << endl;
  else if (y1 == y2)
    if (x1 > x2)
      cout << x2 << " " << y2 - abs(x1 - x2) << " " << x1 << " " << y2 - abs(x1 - x2) << endl;
    else
      cout << x2 << " " << y2 + abs(x1 - x2) << " " << x1 << " " << y2 + abs(x1 - x2) << endl;
  else if (x1 < x2 && y1 > y2)
    cout << x2 + abs(y1 - y2) << " " << y2 + abs(x1 - x2) << " " << x1 + abs(y1 - y2) << " " << y1 + abs(x1 - x2) << endl;
  else if (x1 < x2 && y1 < y2)
    cout << x2 - abs(y1 - y2) << " " << y2 + abs(x1 - x2) << " " << x1 - abs(y1 - y2) << " " << y1 + abs(x1 - x2) << endl;
  else if (x1 > x2 && y1 < y2)
    cout << x2 - abs(y1 - y2) << " " << y2 - abs(x1 - x2) << " " << x1 - abs(y1 - y2) << " " << y1 - abs(x1 - x2) << endl;
  else if (x1 > x2 && y1 > y2)
    cout << x2 + abs(y1 - y2) << " " << y2 - abs(x1 - x2) << " " << x1 + abs(y1 - y2) << " " << y1 - abs(x1 - x2) << endl;
  else
    // noop

    return 0;
}