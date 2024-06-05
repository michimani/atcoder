#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  ui hh = 0;
  for (ui i = 1; i <= n; i++)
  {
    ui h;
    cin >> h;

    if (h > hh)
    {
      hh = h;
      ans = i;
    }
  }

  cout << ans << endl;

  return 0;
}