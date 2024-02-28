#include <iostream>

using namespace std;
using ll = long long;

int main()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll B = a, R = 0;
  ll cnt = 0;
  ll diff = B - R * d;
  while (B > R * d)
  {
    B += b;
    R += c;

    ll dd = B - R * d;
    if (dd >= diff)
    {
      cout << "-1" << endl;
      return 0;
    }
    diff = dd;

    cnt++;
  }

  cout << cnt << endl;
  return 0;
}
