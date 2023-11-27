#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(string str)
{
  if (str.size() < 2)
  {
    return true;
  }

  unsigned long mid = str.size() / 2;
  unsigned long f = mid - 1, b = mid + str.size() % 2;
  unsigned long i = 0, j = 1;
  while (i < j && i < mid)
  {
    j = str.size() - i - 1;

    if (str[i] != str[j] || str[f - i] != str[b + i])
    {
      return false;
    }

    i++;
  }

  return true;
}

int main()
{
  string s = "";
  cin >> s;

  if (is_palindrome(s))
  {
    cout << "Yes" << endl;
    return 0;
  }

  unsigned long front = 0;
  unsigned long back = 0;
  unsigned long i = 0, j = s.size() - 1;
  unsigned long f_add = 1, b_add = 1;
  while (i < j)
  {
    if (f_add == 0 && b_add == 0)
    {
      break;
    }
    if (s[i] != 'a')
    {
      f_add = 0;
    }
    if (s[j] != 'a')
    {
      b_add = 0;
    }

    front += f_add;
    back += b_add;

    i += f_add;
    j -= b_add;
  }

  if (front > back)
  {
    cout << "No" << endl;
    return 0;
  }

  s = s.substr(front, s.size() - front - back);
  if (is_palindrome(s))
  {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}