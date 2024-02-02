#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

struct Item
{
  ui p;
  map<ui, bool> f;
};

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<Item> items(n);
  for (auto &item : items)
  {
    cin >> item.p;
    ui c;
    cin >> c;

    for (ui fi = 0; fi < c; fi++)
    {
      ui f;
      cin >> f;
      item.f[f] = true;
    }
  }

  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      if (i == j)
        continue;

      if (items[i].p < items[j].p)
        continue;

      if (items[j].f.size() < items[i].f.size())
        continue;

      bool has_all = true;
      for (auto &f : items[i].f)
      {
        if (items[j].f.count(f.first) == 0)
        {
          has_all = false;
          break;
        }
      }

      if (!has_all)
        continue;

      if (items[i].p == items[j].p && items[j].f.size() == items[i].f.size())
        continue;

      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}