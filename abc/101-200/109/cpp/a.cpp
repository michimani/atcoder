#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << (a % 2 == 1 && b % 2 == 1 ? "Yes" : "No") << endl;

  return 0;
}