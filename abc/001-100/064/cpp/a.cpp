#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, g, b;
  cin >> r >> g >> b;

  if ((100 * r + 10 * g + b) % 4 == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}