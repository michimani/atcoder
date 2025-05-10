#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> am;
  vector<ui> av(n);
  for (auto &v : av)
  {
    cin >> v;
    if (v <= m)
      am[v]++;
  }

  if (am.size() < m)
  {
    cout << 0 << endl;
    return 0;
  }

  reverse(av.begin(), av.end());

  ui ans = 0;
  for (auto &v : av)
  {
    ans++;
    if (am.count(v) == 0)
      continue;

    am[v]--;
    if (am[v] == 0)
      break;
  }

  cout << ans << endl;

  return 0;
}