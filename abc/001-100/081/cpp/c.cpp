#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  map<ui, ui> bm;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    bm[a]++;
  }

  if (bm.size() <= k)
  {
    cout << 0 << endl;
    return 0;
  }

  vector<ui> bcv;
  auto it = bm.begin();
  while (it != bm.end())
  {
    bcv.push_back(it->second);
    it++;
  }

  sort(bcv.begin(), bcv.end());

  ui ans = 0;
  ui rewrite = ui(bm.size()) - k;
  for (auto &bc : bcv)
  {
    if (rewrite == 0)
    {
      break;
    }
    rewrite--;
    ans += bc;
  }

  cout << ans << endl;
  return 0;
}