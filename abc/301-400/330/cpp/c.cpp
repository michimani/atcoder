#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long d;
  cin >> d;

  long ans = d;
  for (long x = 0; x * x <= d; x++)
  {
    long y = max(long(0), long(sqrt(double(d - x * x))) - 1);
    int l = 0;
    while (true)
    {
      if (l > 2)
      {
        break;
      }

      long a = abs(x * x + y * y - d);
      if (ans < a)
      {
        l++;
      }
      else
      {
        ans = a;
      }
      y++;
    }
  }

  cout << ans << endl;
  return 0;
}