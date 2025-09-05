#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y;
  cin >> x >> y;

  cout << (x + y > 12 ? x + y - 12 : x + y) << endl;

  return 0;
}