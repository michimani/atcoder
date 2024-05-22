#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;
  if (a < b)
    swap(a, b);
  if (a < c)
    swap(a, c);

  ui k;
  cin >> k;
  for (; k--;)
    a *= 2;

  cout << a + b + c << endl;

  return 0;
}