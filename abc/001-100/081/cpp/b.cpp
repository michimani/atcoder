#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

ui dc2(ui a)
{
  ui cnt = 0;
  while (a % 2 == 0)
  {
    a /= 2;
    cnt++;
  }

  return cnt;
}

int main()
{
  ui n;
  cin >> n;

  ui mn = 1000000000;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    if (a % 2 != 0)
    {
      cout << 0 << endl;
      return 0;
    }
    mn = min(mn, dc2(a));
  }

  cout << mn << endl;
  return 0;
}