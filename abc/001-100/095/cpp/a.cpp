#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui ans = 700;

  ui n = 3;
  for (; n--;)
  {
    char c;
    cin >> c;
    ans += 100 * ui(c == 'o');
  }

  cout << ans << endl;
  return 0;
}