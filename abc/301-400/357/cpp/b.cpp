#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  string u = s, l = s;
  ui lc = 0;

  for (ui i = 0; i < s.length(); i++)
  {
    if (s[i] > 'Z')
    {
      lc++;
      u[i] = char(s[i] - 32);
    }
    else
    {
      l[i] = char(s[i] + 32);
    }
  }

  cout << (lc > s.length() / 2 ? l : u) << endl;

  return 0;
}