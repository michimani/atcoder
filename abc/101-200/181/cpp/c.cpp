#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool comp(pair<double, double> &l, pair<double, double> &r)
{
  return l.first < r.first;
}

int main()
{
  ui n;
  cin >> n;

  vector<pair<double, double>> xy(n);
  for (auto &z : xy)
    cin >> z.first >> z.second;

  sort(xy.begin(), xy.end(), comp);

  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      for (ui k = j + 1; k < n; k++)
      {
        if (
            (xy[i].first == xy[j].first && xy[j].first == xy[k].first) ||
            (xy[i].second == xy[j].second && xy[j].second == xy[k].second) ||
            (xy[j].second - xy[i].second) / (xy[j].first - xy[i].first) == (xy[k].second - xy[j].second) / (xy[k].first - xy[j].first))
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}