#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

bool is_palindrome(string str)
{
  if (str.size() < 2)
    return true;

  ull mid = str.size() / 2;
  ull f = mid - 1, b = mid + str.size() % 2;
  ull i = 0, j = 1;
  while (i < j && i < mid)
  {
    j = str.size() - i - 1;

    if (str[i] != str[j] || str[f - i] != str[b + i])
      return false;

    i++;
  }

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