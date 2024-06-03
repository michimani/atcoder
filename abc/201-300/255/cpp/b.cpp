#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, k;
  cin >> n >> k;

  map<ui, bool> a;
  for (ui i = 0; i < k; i++)
  {
    ui aa;
    cin >> aa;
    a[aa] = true;
  }

  vector<pair<double, double>> l;
  vector<pair<double, double>> d;
  for (ui i = 1; i <= n; i++)
  {
    double x, y;
    cin >> x >> y;
    if (a.count(i) > 0)
      l.push_back({x, y});
    else
      d.push_back({x, y});
  }

  double mxd = 0;
  for (ui j = 0; j < d.size(); j++)
  {
    double mnd = 10000000000;
    for (ui i = 0; i < l.size(); i++)
    {
      mnd = min(mnd, sqrt(pow(l[i].first - d[j].first, 2.0) + pow(l[i].second - d[j].second, 2.0)));
    }
    mxd = max(mxd, mnd);
  }

  cout << fixed << setprecision(6) << mxd << endl;

  return 0;
}