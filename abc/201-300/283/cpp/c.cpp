#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui ans = 0;
  bool z = false;
  for (auto c : s)
  {
    if (c == '0')
    {
      if (z)
        ans--;

      z = !z;
    }
    else
    {
      z = false;
    }

    ans++;
  }

  cout << ans << endl;
  return 0;
}