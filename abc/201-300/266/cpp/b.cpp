#include <iostream>

using namespace std;
using ll = long long;

int main()
{
  ll n;
  cin >> n;

  ll d = 998244353;
  for (ll dd = 0; dd < d; dd++)
  {
    if ((n - dd) % d == 0)
    {
      cout << dd << endl;
      return 0;
    }
  }

  return 0;
}