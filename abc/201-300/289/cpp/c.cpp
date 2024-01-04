#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

void cal(ui &n, vector<map<ui, bool>> &s, map<ui, bool> ss, ui pos, ui &ans)
{
  if (pos == s.size())
  {
    ans += ui(ss.size() == n);
    return;
  }

  cal(n, s, ss, pos + 1, ans);

  map<ui, bool> t = s[pos];
  ss.merge(t);
  cal(n, s, ss, pos + 1, ans);

  return;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<map<ui, bool>> s(m);
  for (auto &ss : s)
  {
    ui c;
    cin >> c;
    for (ui i = 0; i < c; i++)
    {
      ui a;
      cin >> a;
      ss[a] = true;
    }
  }

  ui ans = 0;
  map<ui, bool> base;
  cal(n, s, base, 0, ans);

  cout << ans << endl;
  return 0;
}