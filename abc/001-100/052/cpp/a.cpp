#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << max(a * b, c * d) << endl;
  return 0;
}