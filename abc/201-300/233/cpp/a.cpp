#include <iostream>

using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  int z = max(0, y - x);

  cout << z / 10 + int(z % 10 != 0) << endl;

  return 0;
}