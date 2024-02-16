#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  if (a <= 5)
  {
    b = 0;
  }
  else if (a <= 12)
  {
    b /= 2;
  }

  cout << b << endl;
  return 0;
}