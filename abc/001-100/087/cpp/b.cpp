#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, x;
  cin >> a >> b >> c >> x;

  ui ans = 0;
  for (ui i = 0; i <= a; i++)
  {
    for (ui j = 0; j <= b; j++)
    {
      for (ui k = 0; k <= c; k++)
      {
        ui sum = i * 500 + j * 100 + k * 50;
        ans += (ui)(sum == x);
      }
    }
  }

  cout << ans << endl;
  return 0;
}