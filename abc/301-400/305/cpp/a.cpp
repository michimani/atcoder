#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui a = n / 5 * 5, b = (n / 5 + 1) * 5;

  cout << (n - a < b - n ? a : b) << endl;
  return 0;
}