#include <iostream>

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
  string s;
  cin >> s;

  if (!is_palindrome(s))
  {
    cout << "No" << endl;
    return 0;
  }

  string s2 = s;
  for (ui i = 0; i < s.length() / 2; i++)
    s2.pop_back();

  if (!is_palindrome(s))
  {
    cout << "No" << endl;
    return 0;
  }

  string s3 = "";
  for (ui i = ((s.length() + 3) / 2) - 1; i < s.length(); i++)
    s3.push_back(s[i]);

  if (!is_palindrome(s3))
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}