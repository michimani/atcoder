#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string s, t;
  cin >> s >> t;
  for (ui i = 0; i < n; i++)
  {
    if (s[i] == '1')
      s[i] = 'l';
    if (t[i] == '1')
      t[i] = 'l';
    if (s[i] == '0')
      s[i] = 'o';
    if (t[i] == '0')
      t[i] = 'o';

    if (s[i] != t[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}