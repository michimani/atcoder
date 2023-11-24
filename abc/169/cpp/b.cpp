#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  bool has_zero = false;
  vector<unsigned long long> A(n, 0);
  long double d = 0;
  for (auto &a : A)
  {
    cin >> a;

    d += log10l((long double)(a));

    if (a == 0)
    {
      has_zero = true;
    }
  }

  if (has_zero)
  {
    cout << 0 << endl;
    return 0;
  }

  if (d > 18.0000)
  {
    cout << "-1" << endl;
    return 0;
  }

  unsigned long long ans = 1;
  for (auto &a : A)
  {
    ans *= a;
    if (ans > 1000000000000000000)
    {
      cout << "-1" << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}