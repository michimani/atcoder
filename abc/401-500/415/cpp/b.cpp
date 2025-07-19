#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui c = 0;
  for (ui i = 0; i < s.length(); i++)
  {
    if (s[i] == '#')
    {
      if (c == 1)
      {
        cout << ',';
        cout << (i + 1) << endl;
        c = 0;
      }
      else
      {
        cout << (i + 1);
        c++;
      }
    }
  }

  return 0;
}