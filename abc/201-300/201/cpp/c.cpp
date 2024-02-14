#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<char> in, all;
  ui pr = 0;
  for (ui i = 0; i < 10; i++)
  {
    char c;
    cin >> c;
    if (c == 'o')
    {
      in.push_back(char(i - '0'));
      all.push_back(char(i - '0'));
    }
    else if (c == '?')
    {
      pr++;
      all.push_back(char(i - '0'));
    }
  }

  if (in.size() > 4 || (in.size() + pr == 0))
  {
    cout << 0 << endl;
    return 0;
  }

  vector<string> sv;
  string tmp = "";
  ui ans = 0;
  bool ok = false;
  for (auto &d1 : all)
  {
    for (auto &d2 : all)
    {
      for (auto &d3 : all)
      {
        for (auto &d4 : all)
        {
          tmp = {d1, d2, d3, d4};
          ok = true;
          for (auto &i : in)
          {
            if (tmp.find(i) == string::npos)
            {
              ok = false;
              break;
            }
          }
          ans += ui(ok);
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}