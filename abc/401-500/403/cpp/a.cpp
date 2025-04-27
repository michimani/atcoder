#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (ui i = 1; i <= n; i++)
  {
    ui a;
    cin >> a;
    if (i % 2 == 1)
    {
      ans += a;
    }
  }

  cout << ans << endl;

  return 0;
}