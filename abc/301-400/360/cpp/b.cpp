#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  vector<string> ss;
  string sp = "";
  string tt = "";
  for (ui w = 1; w < s.length(); w++)
  {
    ss = {};
    sp = "";
    for (auto &ch : s)
    {
      sp += ch;
      if (sp.length() == w)
      {
        ss.push_back(sp);
        sp = "";
      }
    }
    if (sp.length() > 0)
      ss.push_back(sp);

    for (ui c = 1; c <= w; c++)
    {
      tt = "";
      for (auto &sss : ss)
      {
        if (sss.length() >= c)
          tt += sss[c - 1];
      }

      if (tt == t)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}