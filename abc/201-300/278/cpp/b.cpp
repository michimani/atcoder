#include <iostream>

using namespace std;
using ui = unsigned int;

bool is_mj(ui h, ui m)
{
  string hs = to_string(h), ms = to_string(m);
  ui lu, ld, ru, rd;
  if (hs.length() > 1)
  {
    ld = hs[1] - '0';
    lu = hs[0] - '0';
  }
  else
  {
    ld = hs[0] - '0';
    lu = 0;
  }

  if (ms.length() > 1)
  {
    rd = ms[1] - '0';
    ru = ms[0] - '0';
  }
  else
  {
    rd = ms[0] - '0';
    ru = 0;
  }

  return lu * 10 + ru <= 23 && ld * 10 + rd <= 59;
}

int main()
{
  ui h, m;
  cin >> h >> m;

  while (true)
  {
    if (is_mj(h, m))
    {
      cout << h << " " << m << endl;
      return 0;
    }

    m = (m + 1) % 60;
    if (m == 0)
      h = (h + 1) % 24;
  }

  return 0;
}