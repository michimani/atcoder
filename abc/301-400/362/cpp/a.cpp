#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, g, b;
  cin >> r >> g >> b;

  string c;
  cin >> c;

  switch (c[0])
  {
  case 'R':
    cout << min(g, b) << endl;
    break;

  case 'G':
    cout << min(r, b) << endl;
    break;

  case 'B':
    cout << min(r, g) << endl;
    break;

  default:
    // noop
    break;
  }

  return 0;
}