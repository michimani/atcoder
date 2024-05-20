#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui ans = 1;
  for (; n--;)
    ans = min(ans * 2, ans + k);

  cout << ans << endl;

  return 0;
}