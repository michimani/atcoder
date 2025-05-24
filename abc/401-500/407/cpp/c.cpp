#include <iostream>

using namespace std;
using ui = unsigned int;

ui m(ui x, ui y)
{
  ui d = y % 10;
  if (d > x)
    return 10 - (d - x);

  return x - d;
}

int main()
{
  string s;
  cin >> s;

  ui ans = 0;
  ui b_cnt = 0;
  for (ui i = 1; i <= s.length(); i++)
  {
    ui dig = ui(s[s.length() - i] - 48);
    ui d = m(dig, b_cnt);
    if (d == 0)
    {
      ans++;
      continue;
    }

    b_cnt += d;
    ans += (d + 1);
  }

  cout << ans << endl;

  return 0;
}