#include <iostream>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  ll x;
  cin >> n >> x;

  for (ui i = 1; i <= n; i++)
  {
    ll a;
    cin >> a;
    a -= ll(i % 2 == 0);

    if (x < a)
    {
      cout << "No" << endl;
      return 0;
    }
    x -= a;
  }

  cout << "Yes" << endl;
  return 0;
}