#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui ans = 1;
  while (n / k > 0)
  {
    n /= k;
    ans++;
  }

  cout << ans << endl;
  return 0;
}