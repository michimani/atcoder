#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

bool aeq(string s, string t)
{
  ui diff = 0;
  for (ui i = 0; i < s.size(); i++)
  {
    diff += ui(s[i] != t[i]);
    if (diff > 1)
      return false;
  }

  return true;
}

bool ok(vector<string> &s, map<string, map<string, bool>> g, ui pos, string cur, map<string, bool> chosen)
{
  if (pos == s.size())
    return true;

  chosen[cur] = true;
  bool _ok = false;
  for (auto t : s)
  {
    if (chosen[t] || !g[cur][t])
      continue;

    _ok = _ok || ok(s, g, pos + 1, t, chosen);
  }

  return _ok;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (auto &ss : s)
    cin >> ss;

  map<string, map<string, bool>> g;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      bool v = aeq(s[i], s[j]);
      g[s[i]][s[j]] = v;
      g[s[j]][s[i]] = v;
    }
  }

  map<string, bool> chosen;
  for (auto t1 : s)
  {
    if (ok(s, g, 1, t1, chosen))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}