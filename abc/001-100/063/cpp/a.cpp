#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << (a + b >= 10 ? "error" : to_string(a + b)) << endl;

  return 0;
}