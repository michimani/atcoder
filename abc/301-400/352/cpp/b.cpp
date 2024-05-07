#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui i = 0;
  ui si = 0;
  string ans = "";
  for (auto c : t)
  {
    i++;
    if (c == s[si])
    {
      ans += to_string(i) + " ";
      si++;
    }
  }

  ans.pop_back();

  cout << ans << endl;
  return 0;
}