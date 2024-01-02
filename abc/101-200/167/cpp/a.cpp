#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  if (t.length() != s.length() + 1)
  {
    cout << "No" << endl;
    return 0;
  }

  for (ui i = 0; i < s.length(); i++)
  {
    if (s[i] != t[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}