#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui ans = 0;
  for (auto c : s)
  {
    if (c == 'v')
    {
      ans += 1;
    }
    else if (c == 'w')
    {
      ans += 2;
    }
    else
    {
      // noop
    }
  }

  cout << ans << endl;
  return 0;
}