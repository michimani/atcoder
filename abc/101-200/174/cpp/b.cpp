#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  double d;
  cin >> n >> d;

  ui ans = 0;
  for (; n--;)
  {
    double x, y;
    cin >> x >> y;

    ans += ui(sqrt(x * x + y * y) <= d);
  }

  cout << ans << endl;

  return 0;
}