#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  bool is_prev_zero = false;
  ui ans = 0;
  for (auto c : s)
  {
    switch (c)
    {
    case '0':
      if (is_prev_zero)
      {
        ans++;
        is_prev_zero = false;
      }
      else
      {
        is_prev_zero = true;
      }
      break;

    default:
      if (is_prev_zero)
        ans += 2;
      else
        ans++;

      is_prev_zero = false;
      break;
    }
  }

  // end with '0'
  ans += ui(is_prev_zero);

  cout << ans << endl;

  return 0;
}