#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui l = to_string(n).length();
  ui ans = n;
  ui d = 1;
  while (d < l)
  {
    ans -= min(n, ui(pow(10, d + 1) - 1)) - ui(pow(10, d)) + 1;
    d += 2;
  }

  cout << ans << endl;
  return 0;
}