#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  ull ans = 0;
  for (; n--;)
  {
    ull a, b;
    cin >> a >> b;

    ans += ((a + b) * (b - a + 1)) / 2;
  }

  cout << ans << endl;
  return 0;
}