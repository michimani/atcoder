#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, c;
  cin >> n >> c;

  ui ans = 0;
  ui prev = 0;
  ui t;
  bool got = false;
  for (ui i = 0; i < n; i++)
  {
    cin >> t;
    got = i == 0 || (t - prev) >= c;
    ans += ui(got);

    if (got)
      prev = t;
  }

  cout << ans << endl;

  return 0;
}