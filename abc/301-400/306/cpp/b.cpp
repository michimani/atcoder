#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull ans = 0;
  for (ull i = 0; i < 64; i++)
  {
    ull a;
    cin >> a;
    if (a > 0)
    {
      ans += ull(pow(2, i));
    }
  }

  cout << ans << endl;
  return 0;
}
