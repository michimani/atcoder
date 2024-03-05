#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, k;
  cin >> a >> b >> k;

  for (ui i = a; i <= min(b, a + k - 1); i++)
    cout << i << endl;

  for (ui i = max(a + k, b - k + 1); i <= b; i++)
    cout << i << endl;

  return 0;
}