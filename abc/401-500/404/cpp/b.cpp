#include <iostream>
#include <vector>
#include <climits>

using namespace std;
using ui = unsigned int;

vector<string> rotate90(vector<string> g)
{
  int n = g.size();
  vector<string> r(n, string(n, '.'));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      r[j][n - 1 - i] = g[i][j];

  return r;
}

ui diff(vector<string> const &g1, vector<string> const &g2)
{
  ui d = 0;
  int n = g1.size();
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (g1[i][j] != g2[i][j])
        d++;
  return d;
}

int main()
{
  ui n;
  cin >> n;

  vector<string> s(n), t(n);
  for (auto &ss : s)
    cin >> ss;
  for (auto &tt : t)
    cin >> tt;

  ui ans = UINT_MAX;
  for (int rot = 0; rot < 4; rot++)
  {
    ui d = diff(s, t);
    ans = min(ans, (ui)rot + d);
    s = rotate90(s);
  }

  cout << ans << endl;

  return 0;
}