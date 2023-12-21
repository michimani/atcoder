#include <iostream>

using namespace std;

int main()
{
  unsigned int n, m, p;
  cin >> n >> m >> p;

  unsigned int ans = 0;
  for (unsigned int d = 1; d <= n; d++)
  {
    if (d < m)
    {
      continue;
    }

    ans += ((d - m) % p == 0);
  }

  cout << ans << endl;
  return 0;
}