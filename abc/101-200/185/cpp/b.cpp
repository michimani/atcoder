#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui m;
  int n, t;
  cin >> n >> m >> t;

  int n_max = n;
  int prev_t = 0;
  for (ui i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;

    n = max(0, n - (a - prev_t));

    if (n == 0)
    {
      cout << "No" << endl;
      return 0;
    }

    n = min(n_max, n + (b - a));

    prev_t = b;
  }

  n = max(0, n - (t - prev_t));

  if (n > 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}