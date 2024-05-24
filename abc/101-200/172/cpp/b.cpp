#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s;

  ui ans = 0;
  for (ui i = 0; i < s.length(); i++)
  {
    char t;
    cin >> t;
    ans += ui(t != s[i]);
  }

  cout << ans << endl;

  return 0;
}