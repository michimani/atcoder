#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a;
  cin >> a;

  ui ans = 0;
  for (ui x = 1; x < a; x++)
    ans = max(ans, (a - x) * x);

  cout << ans << endl;
  return 0;
}