#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  map<ll, ll> c;

  ll ans = 0;
  ll a;
  for (ll i = 0; i < n; i++)
  {
    cin >> a;
    ans += c[i - a];
    ++c[i + a];
  }

  cout << ans << endl;

  return 0;
}