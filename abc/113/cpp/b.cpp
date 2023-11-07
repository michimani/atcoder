#include <limits.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n = 0;
  double t, a = 0;
  cin >> n >> t >> a;

  int ans = 0;
  double min_diff = INT_MAX;
  for (unsigned int i = 0; i < n; i++)
  {
    double h = 0;
    cin >> h;

    double d = abs(a - (t - (h * 0.006)));
    if (d < min_diff)
    {
      min_diff = d;
      ans = i + 1;
    }
  }

  cout << ans << endl;
}