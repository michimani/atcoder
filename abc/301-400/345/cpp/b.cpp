#include <iostream>

using namespace std;
using ll = long long;

int main()
{
  ll x;
  cin >> x;

  string sx = to_string(x);
  ll d = sx[sx.length() - 1] - '0';

  ll xx = x / 10;

  if (x >= 0)
  {
    if (d == 0)
      cout << xx << endl;
    else
      cout << xx + 1 << endl;
  }
  else
  {
    cout << xx << endl;
  }

  return 0;
}