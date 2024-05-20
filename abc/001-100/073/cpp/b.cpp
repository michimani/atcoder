#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (; n--;)
  {
    ui l, r;
    cin >> l >> r;
    ans += (r - l + 1);
  }

  cout << ans << endl;

  return 0;
}