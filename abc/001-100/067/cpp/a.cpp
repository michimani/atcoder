#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0 ? "Possible" : "Impossible") << endl;

  return 0;
}