#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x;
  cin >> n >> x;

  ui c = 1;
  for (int i = int('A'); i <= int('Z'); i++)
  {
    for (ui j = 0; j < n; j++)
    {
      if (c == x)
      {
        cout << char(i) << endl;
        return 0;
      }
      c++;
    }
  }

  return 0;
}