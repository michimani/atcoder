#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  if (b > c)
  {
    c = 24 + c;
    if (a <= b)
      a += 24;
  }

  cout << (b <= a && a <= c ? "No" : "Yes") << endl;

  return 0;
}