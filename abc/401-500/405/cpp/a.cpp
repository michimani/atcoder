#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, x;
  cin >> r >> x;

  switch (x)
  {
  case 1:
    if (1600 <= r && r <= 2999)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    break;

  case 2:
    if (1200 <= r && r <= 2399)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
    break;

  default:
    break;
  }

  return 0;
}