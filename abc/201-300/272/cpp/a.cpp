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
    ui a;
    cin >> a;
    ans += a;
  }

  cout << ans << endl;
  return 0;
}