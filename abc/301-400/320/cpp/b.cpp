#include <iostream>

using namespace std;
using ui = unsigned int;

bool is_palindrome(string s)
{
  for (ui i = 0; i <= s.length() / 2; i++)
    if (s[i] != s[s.length() - 1 - i])
      return false;

  return true;
}

int main()
{
  string s;
  cin >> s;

  ui ol = ui(s.length());
  ui l = ol;
  for (; l > 0; l--)
  {
    string t(l, '.');
    for (ui d = 0; d < ol - l + 1; d++)
    {
      for (ui j = 0; j < l; j++)
        t[j] = s[j + d];

      if (is_palindrome(t))
      {
        cout << l << endl;
        return 0;
      }
    }
  }

  return 0;
}