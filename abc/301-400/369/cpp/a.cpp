#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (a == b)
    cout << 1 << endl;
  else if ((a - b) % 2 != 0)
    cout << 2 << endl;
  else
    cout << 3 << endl;

  return 0;
}