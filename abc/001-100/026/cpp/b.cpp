#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<double> r(n, 0);
  for (auto &rr : r)
    cin >> rr;

  sort(r.rbegin(), r.rend());

  double rs = r[0] * r[0];
  for (ui i = 1; i < n; i++)
    rs += r[i] * r[i] * (i % 2 == 0 ? 1 : -1);

  cout << fixed << setprecision(7) << rs * M_PI << endl;
  return 0;
}