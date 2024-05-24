#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, a, b;
  cin >> n >> a >> b;

  cout << min(a * n, b) << endl;

  return 0;
}