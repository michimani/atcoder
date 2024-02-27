#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, x;
  cin >> a >> b >> x;

  cout << (x >= a && x <= a + b ? "YES" : "NO") << endl;
  return 0;
}