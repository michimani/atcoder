#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  if (s[0] > 'Z')
  {
    cout << "No" << endl;
    return 0;
  }

  for (ui i = 1; i < s.length(); i++)
  {
    if (s[i] <= 'Z')
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}