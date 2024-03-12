#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  ui ans = 0;
  ui c = 2;
  for (; c--;)
  {
    if (a < b)
      swap(a, b);

    ans += a;
    a--;
  }

  cout << ans << endl;
  return 0;
}