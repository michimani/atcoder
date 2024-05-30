#include <iostream>

using namespace std;
using ll = long long;

int main()
{

  ll x;
  cin >> x;

  ll d = x / 10;
  ll r = x % 10;

  if (x < 0)
    cout << d - ll(r != 0) << endl;
  else
    cout << d << endl;

  return 0;
}