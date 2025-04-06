#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string s, t;
  cin >> s;

  ui ans = 0;
  char c;
  for (ui i = 0; i < n; i++)
  {
    cin >> c;
    ans += ui(c != s[i]);
  }

  cout << ans << endl;

  return 0;
}