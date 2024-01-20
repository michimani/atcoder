#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui c = 0;
  char prev = '.';
  map<char, bool> alm;
  for (ui i = 0; i < s.size(); i++)
  {
    if (s[i] != prev)
    {
      if (prev != '.')
      {
        if (prev > s[i])
        {
          cout << "No" << endl;
          return 0;
        }
      }
      prev = s[i];
      alm[s[i]] = true;
      c++;
    }
  }

  if (c <= 3 && c == alm.size())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}