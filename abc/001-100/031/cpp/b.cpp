#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l, h;
  cin >> l >> h;
  ui n;
  cin >> n;

  for (; n--;)
  {
    ui a;
    cin >> a;

    if (a >= l && a <= h)
      cout << 0 << endl;
    else if (a > h)
      cout << -1 << endl;
    else
      cout << l - a << endl;
  }

  return 0;
}