#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui ans = 0;
  ui i = 1;
  for (; i <= min(s.length(), t.length()); i++)
  {
    if (s[i - 1] != t[i - 1])
    {
      ans = i;
      break;
    }
  }

  if (ans == 0 && (s.length() >= i || t.length() >= i))
  {
    cout << i << endl;
    return 0;
  }

  cout << ans << endl;

  return 0;
}