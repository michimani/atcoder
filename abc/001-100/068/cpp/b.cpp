#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 1;
  while (ans * 2 <= n)
    ans *= 2;

  cout << ans << endl;

  return 0;
}