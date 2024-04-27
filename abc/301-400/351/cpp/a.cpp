#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a = 0, b = 0;
  for (ui i = 0; i < 9; i++)
  {
    ui aa;
    cin >> aa;
    a += aa;
  }

  for (ui i = 0; i < 8; i++)
  {
    ui bb;
    cin >> bb;
    b += bb;
  }

  cout << a + 1 - b << endl;
  return 0;
}