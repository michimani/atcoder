#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
    {
      cout << "x";
    }
    else
    {
      cout << "o";
    }
  }
  cout << endl;

  return 0;
}