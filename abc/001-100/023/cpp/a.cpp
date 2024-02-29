#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  cout << (x / 10) + x - (x / 10) * 10 << endl;
  return 0;
}