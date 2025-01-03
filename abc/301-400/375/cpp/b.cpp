#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ui = unsigned int;

double dist(pair<double, double> from, pair<double, double> to)
{
  return sqrt(pow(from.first - to.first, 2) + pow(from.second - to.second, 2));
}

int main()
{
  ui n;
  cin >> n;

  double ans = 0;
  pair<double, double> c = {0, 0};

  for (; n--;)
  {
    double x, y;
    cin >> x >> y;

    ans += dist(c, {x, y});
    c = {x, y};
  }

  ans += dist(c, {0, 0});

  cout << fixed << setprecision(7) << ans << endl;

  return 0;
}