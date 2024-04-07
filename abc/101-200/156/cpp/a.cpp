#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, r;
  cin >> n >> r;

  if (n >= 10)
    cout << r << endl;
  else
    cout << r + (100 * (10 - n)) << endl;

  return 0;
}