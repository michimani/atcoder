#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  ll m = 0;
  ll e = 0;
  ll c = 0;
  for (; n--;)
  {
    ll x;
    cin >> x;

    m += abs(x);
    e += abs(x) * abs(x);
    c = max(c, abs(x));
  }

  cout << m << endl;
  cout << fixed << setprecision(10) << sqrt(e) << endl;
  cout << c << endl;

  return 0;
}