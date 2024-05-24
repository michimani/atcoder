#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << max(a * c, max(a * d, max(b * c, b * d))) << endl;

  return 0;
}