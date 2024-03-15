#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  for (ui x = a; x <= b; x++)
  {
    if (x % c == 0)
    {
      cout << x << endl;
      return 0;
    }
  }

  cout << "-1" << endl;
  return 0;
}