#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, t;
  cin >> n >> t;

  ui ans = t;
  ui prev = 0;
  for (ui i = 0; i < n; i++)
  {
    ui tt;
    cin >> tt;

    ans += min(t, tt - prev);

    prev = tt;
  }

  cout << ans << endl;
  return 0;
}