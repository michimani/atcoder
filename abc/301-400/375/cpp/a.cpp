#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  string s;
  cin >> n >> s;

  if (n < 3)
  {
    cout << 0 << endl;
    return 0;
  }

  ui ans = 0;
  for (ui i = 0; i < n - 2; i++)
    ans += ui(s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.');

  cout << ans << endl;

  return 0;
}