#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  if ((a == b && b == c) || (a + b == c) || (b + c == a) || (c + a == b))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}