#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y, z;
  cin >> x >> y >> z;

  x -= 2 * z;

  ui ans = x / (y + z);
  if (x - (ans * (y + z)) >= y)
    ans++;

  cout << ans << endl;

  return 0;
}