#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui ans = s.length();
  for (ui si = 0; si <= s.length() - t.length(); si++)
  {
    ui tmp = 0;
    for (ui i = 0; i < t.length(); i++)
      tmp += ui(s[si + i] != t[i]);

    ans = min(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}