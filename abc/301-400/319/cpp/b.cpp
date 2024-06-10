#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui i = 0; i <= n; i++)
  {
    bool f = false;
    for (ui j = 1; j <= 9; j++)
    {
      if (n % j == 0 && i % (n / j) == 0)
      {
        cout << j;
        f = true;
        break;
      }
    }

    if (!f)
      cout << "-";
  }

  cout << endl;

  return 0;
}