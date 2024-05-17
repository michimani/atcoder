#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, d;
  cin >> a >> d;

  cout << max((a + 1) * d, a * (d + 1)) << endl;
  return 0;
}