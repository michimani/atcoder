#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (ui i = 1; i <= n; i += 2)
  {
    map<ui, bool> c;
    for (ui j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        c[i] = true;
        c[i / j] = true;
      }
    }

    ans += ui(c.size() == 8);
  }

  cout << ans << endl;

  return 0;
}