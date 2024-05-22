#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui k;
  cin >> k;

  cout << (k / 2) * (k / 2 + (k % 2 != 0)) << endl;

  return 0;
}