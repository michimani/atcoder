#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  for (ui i = 0; i <= 9; i++)
  {
    if (i != a + b)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}