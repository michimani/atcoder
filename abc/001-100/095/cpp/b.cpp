#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  ui ans = n;
  ui min_m = 100000;
  for (; n--;)
  {
    ui m;
    cin >> m;
    min_m = min(min_m, m);
    x -= m;
  }

  ans += x / min_m;

  cout << ans << endl;

  return 0;
}