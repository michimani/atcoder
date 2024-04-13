#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<pair<double, double>> ab(n);
  double total = 0;
  for (ui i = 0; i < n; i++)
  {
    cin >> ab[i].first >> ab[i].second;
    total += ab[i].first / ab[i].second;
  }

  double m = total / 2;
  double ans = 0;
  for (auto c : ab)
  {
    double d = c.first / c.second;
    if (m >= d)
    {
      ans += c.first;
      m -= d;
    }
    else
    {
      ans += c.second * m;
      break;
    }
  }

  cout << fixed << setprecision(6) << ans << endl;
  return 0;
}