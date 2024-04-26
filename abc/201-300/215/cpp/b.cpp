#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  if (n == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  ull k = 0;
  ull kk = 2;
  while (kk <= n)
  {
    k++;
    kk *= 2;
  }

  cout << k << endl;

  return 0;
}