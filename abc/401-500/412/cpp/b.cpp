#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  map<char, bool> tm;
  for (auto tc : t)
    tm[tc] = true;

  bool appr = false;
  for (ui i = 1; i < s.length(); i++)
  {
    if ('A' <= s[i] && s[i] <= 'Z')
    {
      if (!appr)
      {
        appr = true;
        continue;
      }

      if (tm[s[i - 1]])
        continue;

      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}