#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y;
  cin >> x >> y;

  for (ui t = 0; t <= x; t++)
  {
    if (t * 2 + (x - t) * 4 == y)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}