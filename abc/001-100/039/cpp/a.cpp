#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  cout << a * b * 2 + b * c * 2 + c * a * 2 << endl;
  return 0;
}