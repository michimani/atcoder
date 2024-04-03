#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << (a >= b * 2 ? a - b * 2 : 0) << endl;
  return 0;
}