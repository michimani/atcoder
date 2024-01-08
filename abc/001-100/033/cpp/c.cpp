#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui tmp = 0;
  char mode = '+';
  ui ans = 0;
  for (auto &d : s)
  {
    if (d == '+' || d == '*')
    {
      mode = d;
      continue;
    }

    ui num = ui(d - '0');
    if (mode == '+')
    {
      ans += ui(tmp > 0);
      tmp = num;
    }
    else if (mode == '*')
    {
      tmp = ui(tmp > 0 && num > 0);
    }
    else
    {
      // noop
    }
  }

  ans += ui(tmp > 0);

  cout << ans << endl;
  return 0;
}