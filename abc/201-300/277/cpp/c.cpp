#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;

void traverse(map<ui, vector<ui>> &lm, map<ui, bool> &hm, ui c, ui &ans)
{
  ans = max(ans, c);
  hm[c] = true;
  for (ui i = 0; i < lm[c].size(); i++)
  {
    ui t = lm[c][i];
    if (hm.count(t) == 0)
    {
      traverse(lm, hm, t, ans);
    }
  }
  return;
}

int main()
{
  ui n;
  cin >> n;

  map<ui, vector<ui>> lm;
  for (ui i = 0; i < n; i++)
  {
    ui a, b;
    cin >> a >> b;
    lm[a].push_back(b);
    lm[b].push_back(a);
  }

  ui ans = 0;
  map<ui, bool> hm;
  traverse(lm, hm, 1, ans);

  cout << ans << endl;
  return 0;
}