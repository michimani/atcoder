#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui s, t;
  cin >> s >> t;

  ull ans = 0;
  for (ui a = 0; a <= s; a++)
    for (ui b = 0; b <= s; b++)
      for (ui c = 0; c <= s; c++)
        ans += (a + b + c <= s && a * b * c <= t);

  cout << ans << endl;
  return 0;
}