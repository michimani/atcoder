#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (a == 1)
    a = 14;
  if (b == 1)
    b = 14;

  if (a > b)
    cout << "Alice" << endl;
  else if (a < b)
    cout << "Bob" << endl;
  else
    cout << "Draw" << endl;

  return 0;
}