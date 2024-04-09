#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y, z;
  cin >> x >> y >> z;

  swap(x, y);
  swap(x, z);

  cout << x << " " << y << " " << z << endl;
  return 0;
}