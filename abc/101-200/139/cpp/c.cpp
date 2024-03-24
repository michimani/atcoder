#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  ui p = 0;
  ui c = 0;
  for (; n--;)
  {
    ui h;
    cin >> h;
    if (h > p)
    {
      ans = max(ans, c);
      c = 0;
    }
    else
    {
      c++;
    }
    p = h;
  }
  ans = max(ans, c);

  cout << ans << endl;
  return 0;
}