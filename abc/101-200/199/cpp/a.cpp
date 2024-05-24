#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  cout << (a * a + b * b < c * c ? "Yes" : "No") << endl;

  return 0;
}