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
  string n;
  cin >> n;

  if (is_palindrome(n))
  {
    cout << "Yes" << endl;
    return 0;
  }

  ui mx = 0;
  for (ui i = 0; i < n.length(); i++)
  {
    if (n[n.length() - 1 - i] != '0')
      break;

    mx++;
  }

  for (ui i = 0; i < mx; i++)
  {
    n = '0' + n;
    if (is_palindrome(n))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}