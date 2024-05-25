#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  ui ans = 1;
  for (ui i = 0; i < a - b; i++)
  {
    ans *= 32;
  }

  cout << ans << endl;

  return 0;
}