#include <iostream>
#include <iomanip>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  double ans = 0;
  for (ui i = 1; i <= n; i++)
    ans += double(10000 * i) * (1 / double(n));

  cout << fixed << setprecision(7) << ans << endl;
  return 0;
}