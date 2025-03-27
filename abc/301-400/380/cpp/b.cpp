#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui c = 0;
  string ans = "";
  for (ui i = 1; i < s.length(); i++)
  {
    if (s[i] == '|')
    {
      ans = ans + to_string(c) + " ";
      c = 0;
    }
    else
    {
      c++;
    }
  }

  ans.pop_back();
  cout << ans << endl;

  return 0;
}