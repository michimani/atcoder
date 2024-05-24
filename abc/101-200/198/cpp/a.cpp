#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (ui i = 1; i <= n - 1; i++)
    ans++;

  cout << ans << endl;

  return 0;
}