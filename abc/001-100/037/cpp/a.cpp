#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  ui ans = 0;
  for (ui w = 0; w <= c / a; w++)
    ans = max(ans, w + (c - a * w) / b);

  cout << ans << endl;
  return 0;
}