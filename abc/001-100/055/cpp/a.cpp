#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui x = 800 * n;
  ui y = 200 * (n / 15);

  cout << x - y << endl;
  return 0;
}