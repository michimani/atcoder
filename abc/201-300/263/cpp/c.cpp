#include <iostream>

using namespace std;
using ui = unsigned int;

void cal(ui &n, ui &m, ui cur, ui cnt, string s)
{
  s += to_string(cur);
  if (cnt == n)
  {
    cout << s << endl;
    return;
  }

  s += " ";
  for (ui i = cur + 1; i <= m; i++)
  {
    cal(n, m, i, cnt + 1, s);
  }
}

int main()
{
  ui n, m;
  cin >> n >> m;

  for (ui i = 1; i <= m; i++)
  {
    cal(n, m, i, 1, "");
  }

  return 0;
}