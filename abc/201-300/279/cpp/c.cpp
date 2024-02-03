#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<string> s(w, "");
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      char c;
      cin >> c;
      s[j] += c;
    }
  }

  map<string, ui> sm;
  for (auto &ss : s)
  {
    sm[ss]++;
  }

  vector<string> t(w, "");
  for (ui i = 0; i < h; i++)
  {
    for (ui j = 0; j < w; j++)
    {
      char c;
      cin >> c;
      t[j] += c;
    }
  }

  for (auto &tt : t)
  {
    if (sm.count(tt) == 0 || sm[tt] == 0)
    {
      cout << "No" << endl;
      return 0;
    }

    sm[tt]--;
  }

  cout << "Yes" << endl;
  return 0;
}