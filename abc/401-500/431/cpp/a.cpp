#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, b;
  cin >> h >> b;

  cout << (h < b ? 0 : h - b) << endl;

  return 0;
}