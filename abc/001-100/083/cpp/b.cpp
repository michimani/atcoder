#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, a, b;
  cin >> n >> a >> b;

  ui ans = 0;
  for (ui i = 1; i <= n; i++)
  {
    string istr = to_string(i);
    ui sum = 0;
    for (ui si = 0; si < istr.length(); si++)
    {
      sum += istr[si] - '0';
    }

    if (a <= sum && sum <= b)
    {
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}