#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> box;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    box[a]++;
  }

  vector<ui> bb(m, 0);
  for (auto &b : bb)
    cin >> b;

  sort(bb.begin(), bb.end());

  ull ans = 0;
  for (auto &b : bb)
  {
    bool ok = false;
    ui cb = b;
    if (box.count(b) > 0)
    {
      ok = true;
    }
    else
    {
      auto it = box.begin();
      while (it != box.end())
      {
        if (b > it->first)
        {
          ui er = it->first;
          it++;
          box.erase(er);
          if (box.size() == 0)
            break;
          continue;
        }

        cb = it->first;
        ok = true;
        break;
      }
    }

    if (!ok)
    {
      cout << -1 << endl;
      return 0;
    }

    ans += ull(cb);
    box[cb]--;

    if (box[cb] == 0)
      box.erase(cb);
  }

  cout << ans << endl;

  return 0;
}