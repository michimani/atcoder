#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  cout << (x >= 1200 ? "ARC" : "ABC") << endl;
  return 0;
}