#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui bc = 0;
  for (ui i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (c == '|')
    {
      bc++;
      continue;
    }

    if (c == '*')
    {
      if (bc == 1)
      {
        cout << "in" << endl;
      }
      else
      {
        cout << "out" << endl;
      }
      return 0;
    }
  }

  // noop
  return 0;
}