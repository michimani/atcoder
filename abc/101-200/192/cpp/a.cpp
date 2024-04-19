#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  cout << 100 - (x % 100) << endl;
  return 0;
}