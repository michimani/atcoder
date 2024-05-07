#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, x, y, z;
  cin >> n >> x >> y >> z;

  cout << ((x <= z && z <= y) || (y <= z && z <= x) ? "Yes" : "No") << endl;
  return 0;
}