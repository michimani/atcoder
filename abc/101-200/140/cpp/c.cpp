#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  ui prev = 0;
  for (ui i = 0; i < n - 1; i++)
  {
    ui b;
    cin >> b;
    ans += (b * 2 - prev);

    if (i > 0 && prev < b)
    {
      ans -= (b - prev);
    }
    prev = b;
  }

  cout << ans << endl;
  return 0;
}