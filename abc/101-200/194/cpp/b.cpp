#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  vector<pair<ui, ui>> ab(n);

  ui same = 200000;
  for (auto &c : ab)
  {
    cin >> c.first >> c.second;
    same = min(same, c.first + c.second);
  }

  ui diff = 200000;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      if (i == j)
        continue;

      diff = min(diff, max(ab[i].first, ab[j].second));
    }
  }

  cout << min(same, diff) << endl;
  return 0;
}