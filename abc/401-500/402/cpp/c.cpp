#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<ui> mk(m);

  unordered_map<ui, vector<ui>> nm;

  ui k, a;
  for (ui i = 0; i < m; i++)
  {
    cin >> k;
    mk[i] = k;
    for (ui j = 0; j < k; j++)
    {
      cin >> a;
      nm[a].push_back(i);
    }
  }

  ui c = 0;

  ui food;
  for (ui day = 0; day < n; day++)
  {
    cin >> food;

    auto it = nm.find(food);
    if (it != nm.end())
      for (ui dish_id : it->second)
        if (--mk[dish_id] == 0)
          c++;

    cout << c << endl;
  }

  return 0;
}