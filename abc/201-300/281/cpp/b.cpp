#include <iostream>

using namespace std;

using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui l = s.length();

  if (l != 8 || s[0] < 'A' || s[l - 1] < 'A' || s[1] < '1' || s[1] > '9')
  {
    cout << "No" << endl;
    return 0;
  }

  for (ui i = 2; i < l - 1; i++)
  {
    if (s[i] < '0' || s[i] > '9')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}