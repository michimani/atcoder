#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  for (ui i = 8; i > 0; i--)
  {
    for (ui j = 0; j < 8; j++)
    {
      char c;
      cin >> c;
      if (c == '*')
      {
        cout << char('a' + j) << i << endl;
        return 0;
      }
    }
  }

  return 0;
}