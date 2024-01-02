#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui ans = 0;
  for (ui f = 1; f <= n; f++)
  {
    for (ui r = 1; r <= k; r++)
    {

      ans += f * 100 + r;
    }
  }

  cout << ans << endl;
  return 0;
}