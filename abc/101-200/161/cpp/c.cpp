#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n, k;
  cin >> n >> k;

  if (n == k)
  {
    cout << 0 << endl;
    return 0;
  }

  if (n < k)
  {
    cout << min(n, k - n) << endl;
    return 0;
  }

  if (n == 1 || n % k == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  cout << (k * ((n / k) + 1) % n) << endl;

  return 0;
}