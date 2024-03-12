#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

char rev(char a)
{
  return (a == '0' ? '1' : '0');
}

void trav(ui &n, string &s, char prev, char curr, char next, ui pos, ui cnt, ui &ans)
{
  if (pos == n - 1)
  {
    ans = min(ans, cnt);
    return;
  }

  if (curr == next)
  {
    next = rev(next);
    trav(n, s, curr, next, s[pos + 2], pos + 1, cnt + 1, ans);

    next = rev(next);
    if (pos > 0 && prev == curr)
    {
      curr = rev(curr);
      trav(n, s, curr, next, s[pos + 2], pos + 1, cnt + 1, ans);
    }
  }
  else
  {
    trav(n, s, curr, next, s[pos + 2], pos + 1, cnt, ans);
  }

  return;
}

int main()
{
  string s;
  cin >> s;

  ui n = ui(s.length());
  ui ans = n;

  trav(n, s, '.', s[0], s[1], 0, 0, ans);

  cout << ans << endl;
  return 0;
}