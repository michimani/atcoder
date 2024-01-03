#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, y;
  cin >> n >> y;

  for (ui i = 0; i <= n; i++)
  {
    for (ui j = 0; j <= n - i; j++)
    {
      ui k = n - i - j;
      if (10000 * i + 5000 * j + 1000 * k == y)
      {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
  return 0;
}