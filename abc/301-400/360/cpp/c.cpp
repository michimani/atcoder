#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool comp(const ui *lp, const ui *rp)
{
  return *lp < *rp;
}

int main()
{
  ui n;
  cin >> n;

  vector<ui> w(n, 0);
  map<ui, vector<ui *>> aw;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    aw[a].push_back(&w[i]);
  }

  for (auto &ww : w)
    cin >> ww;

  ui ans = 0;
  for (auto &m : aw)
  {
    if (m.second.size() == 1)
      continue;

    sort(m.second.begin(), m.second.end(), comp);
    for (ui i = 0; i < m.second.size() - 1; i++)
      ans += *m.second[i];
  }

  cout << ans << endl;

  return 0;
}