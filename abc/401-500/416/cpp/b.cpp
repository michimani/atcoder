#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  string t = s;
  int last_o = -2;

  for (ui i = 0; i < s.length(); i++)
  {
    if (s[i] == '#')
      continue;

    bool can_place = true;
    if (last_o >= 0)
    {
      bool has_hash = false;
      for (int j = last_o + 1; j < (int)i; j++)
      {
        if (s[j] == '#')
        {
          has_hash = true;
          break;
        }
      }

      if (!has_hash)
        can_place = false;
    }

    if (can_place)
    {
      t[i] = 'o';
      last_o = i;
    }
    else
    {
      t[i] = '.';
    }
  }

  cout << t << endl;

  return 0;
}
