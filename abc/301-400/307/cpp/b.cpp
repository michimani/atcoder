#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

bool is_palindrome(string str)
{
  if (str.size() < 2)
    return true;

  ui mid = str.size() / 2;
  ui f = mid - 1, b = mid + str.size() % 2;
  ui i = 0, j = 1;
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
  ui n;
  cin >> n;

  vector<string> s(n, "");
  for (auto &ss : s)
    cin >> ss;

  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      if (is_palindrome(s[i] + s[j]) || is_palindrome(s[j] + s[i]))
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}