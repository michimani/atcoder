#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, c;
  cin >> r >> c;
  for (ui i = 1; i <= 2; i++)
  {
    for (ui j = 1; j <= 2; j++)
    {
      ui a;
      cin >> a;
      if (i == r && j == c)
        cout << a << endl;
    }
  }

  return 0;
}