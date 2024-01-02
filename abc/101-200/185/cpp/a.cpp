#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ans = 101;
  for (ui i = 0; i < 4; i++)
  {
    ui a;
    cin >> a;
    ans = min(ans, a);
  }

  cout << ans << endl;
  return 0;
}