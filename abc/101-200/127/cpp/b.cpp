#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui r, d, x;
  cin >> r >> d >> x;

  vector<ui> mo(11, 0);
  mo[0] = x;
  for (ui i = 1; i <= 10; i++)
  {
    mo[i] = r * mo[i - 1] - d;
  }

  for (ui i = 1; i < 11; i++)
  {
    cout << mo[i] << endl;
  }

  return 0;
}