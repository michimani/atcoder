#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui i = 0; i <= n / 4; i++)
  {
    for (ui j = 0; j <= n / 7; j++)
    {
      if (4 * i + 7 * j == n)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}