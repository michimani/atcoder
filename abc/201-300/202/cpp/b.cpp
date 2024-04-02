#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 0; i < s.length(); i++)
  {
    switch (s[s.length() - 1 - i])
    {
    case '6':
      cout << '9';
      break;

    case '9':
      cout << '6';
      break;

    default:
      cout << s[s.length() - 1 - i];
      break;
    }
  }
  cout << endl;

  return 0;
}