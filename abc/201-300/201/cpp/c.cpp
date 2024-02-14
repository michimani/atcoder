#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<char> in;
  vector<char> pr;
  vector<char> all;
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
      pr.push_back(char(i - '0'));
      all.push_back(char(i - '0'));
    }
    else
    {
      // noop
    }
  }

  if (in.size() > 4 || (in.size() + pr.size() == 0))
  {
    cout << 0 << endl;
    return 0;
  }

  vector<string> sv;
  for (auto d1 : all)
    for (auto d2 : all)
      for (auto d3 : all)
        for (auto d4 : all)
          sv.push_back({d1, d2, d3, d4});

  ui ans = 0;
  bool ok = false;
  for (auto &s : sv)
  {
    ok = true;
    for (auto &i : in)
    {
      if (s.find(i) == string::npos)
      {
        ok = false;
        break;
      }
    }
    ans += ui(ok);
  }

  cout << ans << endl;
  return 0;
}