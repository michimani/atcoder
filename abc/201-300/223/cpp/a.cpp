#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  cout << (x > 0 && x % 100 == 0 ? "Yes" : "No") << endl;
  return 0;
}