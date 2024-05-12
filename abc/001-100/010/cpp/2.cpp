#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;
    if (a >= 2 && a % 2 == 0)
    {
      ans++;
      a--;
    }

    if (a >= 5 && (a - 5) % 3 == 0)
    {
      ui d = 1 + ui(a % 2 == 1);
      ans += d;
    }
  }

  cout << ans << endl;
  return 0;
}