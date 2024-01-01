#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, a, x, y;
  cin >> n >> a >> x >> y;

  ui ans = 0;
  if (n > a)
  {
    ans = (a * x) + (n - a) * y;
  }
  else
  {
    ans = n * x;
  }

  cout << ans << endl;
  return 0;
}