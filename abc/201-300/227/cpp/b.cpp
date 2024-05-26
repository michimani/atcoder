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
    ui s;
    cin >> s;
    bool ok = false;
    for (ui a = 1; a <= 250; a++)
    {
      for (ui b = 1; b <= 250; b++)
      {
        if (s == 4 * a * b + 3 * a + 3 * b)
        {
          ok = true;
          break;
        }
      }

      if (ok)
        break;
    }
    ans += ui(!ok);
  }

  cout << ans << endl;

  return 0;
}