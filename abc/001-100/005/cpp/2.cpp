#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 100;
  for (; n--;)
  {
    ui t;
    cin >> t;
    ans = min(ans, t);
  }

  cout << ans << endl;
  return 0;
}