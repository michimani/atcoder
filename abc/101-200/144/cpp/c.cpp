#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned long long n;
  cin >> n;

  unsigned long long ans = 0;

  for (unsigned long long i = 1; i <= (unsigned long long)(sqrt(n)); i++)
  {
    if (n % i != 0)
    {
      continue;
    }

    if (ans == 0)
    {
      ans = i + n / i - 2;
    }
    else
    {
      ans = min(ans, i + n / i - 2);
    }
  }

  cout << ans << endl;
  return 0;
}