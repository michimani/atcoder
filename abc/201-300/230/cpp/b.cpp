#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  if (s.length() == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (s.length() == 2)
  {
    if (s == "oo")
    {
      cout << "No" << endl;
      return 0;
    }

    cout << "Yes" << endl;
    return 0;
  }

  for (unsigned int i = 2; i < s.length(); i++)
  {
    if (
        (s[i - 2] == 'x' && s[i - 1] == 'x' && s[i] == 'x') ||
        (s[i - 1] == 'o' && s[i] == 'o') ||
        (s[i - 2] == 'o' && s[i] == 'o') ||
        (s[i - 1] == 'o' && s[i - 2] == 'o'))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}