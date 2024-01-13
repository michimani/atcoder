#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  for (ui i = 1; i <= n; i++)
  {
    ui p;
    cin >> p;

    if (p == x)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}