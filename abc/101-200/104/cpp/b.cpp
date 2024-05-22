#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui l = ui(s.length());
  bool c = false;
  bool w = false;
  for (ui i = 0; i < l; i++)
  {
    if (i == 0)
    {
      w = (s[i] != 'A');
    }
    else if (i >= 2 && i <= l - 2 && s[i] == 'C')
    {
      if (c)
        w = true;
      else
        c = true;
    }
    else if (i > l - 2 && !c)
    {
      w = true;
    }
    else
    {
      w = (s[i] < 'a' || s[i] > 'z');
    }

    if (w)
    {
      cout << "WA" << endl;
      return 0;
    }
  }

  cout << "AC" << endl;

  return 0;
}