#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui i;
  ui ans = 0;
  ui d = 0;

  while (d * 2 + 3 <= s.length())
  {
    for (i = 0; i < s.length() - 2 - d * 2; i++)
      ans += ui(s[i] == 'A' && s[i + d + 1] == 'B' && s[i + d * 2 + 2] == 'C');

    d++;
  }

  cout << ans << endl;

  return 0;
}