#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, k;
  cin >> n >> k;

  ull sum = 0;
  map<ui, ull> ds;
  vector<ui> days;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    ull b;
    cin >> a >> b;

    if (ds.count(a) == 0)
    {
      days.push_back(a);
      ds[a] = b;
    }
    else
    {
      ds[a] += b;
    }

    sum += b;
  }

  sort(days.begin(), days.end());

  ui yd = 0;
  for (auto &d : days)
  {
    if (sum <= k)
    {
      cout << yd + 1 << endl;
      return 0;
    }

    sum -= ds[d];
    yd = d;
  }

  cout << yd + 1 << endl;

  return 0;
}