#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  switch (q)
  {
  case 1:
    cout << "ABC" << endl;
    break;

  case 2:
    cout << "chokudai" << endl;
    break;

  default:
    break;
  }

  return 0;
}