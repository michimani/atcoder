#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  cout << (a + b + c >= 22 ? "bust" : "win") << endl;

  return 0;
}