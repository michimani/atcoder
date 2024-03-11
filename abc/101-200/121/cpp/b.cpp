#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n, m;
  ll c;
  cin >> n >> m >> c;

  vector<ll> b(m, 0);
  for (auto &bb : b)
    cin >> bb;

  ui ans = 0;
  ll s = 0;
  ll a = 0;
  for (ui i = 0; i < n; i++)
  {
    s = 0;
    for (ui j = 0; j < m; j++)
    {
      cin >> a;
      s += a * b[j];
    }
    ans += ui(s + c > 0);
  }

  cout << ans << endl;
  return 0;
}