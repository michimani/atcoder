#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  vector<ll> a(n, 0);
  ll m = 1000000007;
  ll total = 0;

  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];

    total += a[i];
    total %= m;
  }

  ll ans = 0;
  for (ui i = 0; i < a.size(); i++)
  {
    total -= a[i];
    if (total < 0)
      total += m;
    ans = (ans + (a[i] * total)) % m;
  }

  cout << ans << endl;
  return 0;
}