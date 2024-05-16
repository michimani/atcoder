#include <iostream>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  ll s, t;
  cin >> n >> s >> t;

  ll w;
  cin >> w;

  ui ans = ui(w >= s && w <= t);
  for (ui i = 0; i < n - 1; i++)
  {
    ll a;
    cin >> a;

    w += a;
    ans += ui(w >= s && w <= t);
  }

  cout << ans << endl;
  return 0;
}