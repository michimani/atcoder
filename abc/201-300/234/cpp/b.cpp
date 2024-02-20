#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<pair<double, double>> c(n);
  for (auto &cc : c)
    cin >> cc.first >> cc.second;

  double ans = 0;
  for (ui i = 0; i < n; i++)
    for (ui j = i + 1; j < n; j++)
      ans = max(ans, pow(abs(c[i].first - c[j].first), 2) + pow(abs(c[i].second - c[j].second), 2));

  cout << fixed << setprecision(7) << sqrt(ans) << endl;

  return 0;
}