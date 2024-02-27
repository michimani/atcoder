#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  int a, b, x;
  cin >> a >> b >> x;

  cout << (x - a >= 0 && x - a <= b ? "YES" : "NO") << endl;
  return 0;
}