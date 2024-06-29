#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, k;
  cin >> n >> k;

  ull ans = k;
  n--;
  for (; n--;)
    ans *= ull(k - 1);

  cout << ans << endl;

  return 0;
}