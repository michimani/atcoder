#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui y;
  cin >> y;

  while (y % 4 != 2)
    y++;

  cout << y << endl;

  return 0;
}