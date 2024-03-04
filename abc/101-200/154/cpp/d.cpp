#include <iostream>
#include <map>
#include <deque>
#include <cmath>
#include <iomanip>

using namespace std;
using ui = unsigned int;

map<double, double> exm;

double ex(double x)
{
  if (exm.count(x) > 0)
    return exm[x];

  double exv = (((1 + x) * x) / 2) / x;
  exm[x] = exv;

  return exv;
}

int main()
{
  ui n, k;
  cin >> n >> k;

  double ans = 0;
  double ans_tmp = 0;
  deque<double> selected;
  for (ui i = 0; i < n; i++)
  {
    double p;
    cin >> p;

    ans_tmp += ex(p);
    selected.push_back(p);

    if (selected.size() > k)
    {
      double d = selected.front();
      selected.pop_front();
      ans_tmp -= ex(d);
    }

    if (selected.size() == k)
      ans = max(ans, ans_tmp);
  }

  cout << fixed << setprecision(6) << ans << endl;
  return 0;
}