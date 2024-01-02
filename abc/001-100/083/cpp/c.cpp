#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull x, y;
  cin >> x >> y;

  ull ans = 0;
  ull n = x;
  while (n <= y)
  {
    ans++;
    n *= 2;
  }

  cout << ans << endl;
  return 0;
}