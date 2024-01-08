#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  for (ui i = 1; i < 10000; i++)
  {
    if ((i * 8) / 100 == a && (i * 10) / 100 == b)
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}