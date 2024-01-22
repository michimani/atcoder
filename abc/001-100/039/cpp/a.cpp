#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  cout << (a * b + b * c + c * a) * 2 << endl;
  return 0;
}