#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = 0; i < s.length(); i++)
  {
    if ((i % 2 == 0 && (s[i] < 'a' || s[i] > 'z')) || (i % 2 != 0 && (s[i] < 'A' || s[i] > 'Z')))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}