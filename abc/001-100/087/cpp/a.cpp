#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, a, b;
  cin >> x >> a >> b;

  x -= a;
  cout << x % b << endl;

  return 0;
}