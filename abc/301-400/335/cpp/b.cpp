#include <iostream>
#include <vector>
#include <map>
#include <tuple>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  for (ui x = 0; x <= n; x++)
  {
    for (ui y = 0; y <= n; y++)
    {
      for (ui z = 0; z <= n; z++)
      {
        if (x + y + z <= n)
        {

          cout << x << " " << y << " " << z << endl;
        }
      }
    }
  }

  return 0;
}