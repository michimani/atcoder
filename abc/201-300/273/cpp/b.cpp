#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ul = unsigned long;

int main()
{
  ul x;
  ui k;
  cin >> x >> k;

  string xs = to_string(x);
  ul dc = 1;
  for (ui i = 0; i < min(k, (ui)(xs.length())); i++)
  {
    ui d = (ui)(xs[xs.length() - 1 - i] - '0');
    if (d >= 5)
    {
      x += (10 - d) * dc;
    }
    else
    {
      x -= d * dc;
    }

    dc *= 10;
    xs = to_string(x);
  }

  cout << x << endl;
  return 0;
}