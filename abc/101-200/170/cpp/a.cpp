#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  for (ui i = 1; i <= 5; i++)
  {
    ui x;
    cin >> x;

    if (x == 0)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}