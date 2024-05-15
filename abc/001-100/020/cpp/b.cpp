#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  cout << ui(a * pow(10, to_string(b).length()) + b) * 2 << endl;
  return 0;
}