#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  double n;
  cin >> n;

  cout << (n > 2 * log2(n) ? "Yes" : "No") << endl;
  return 0;
}