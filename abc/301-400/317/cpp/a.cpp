#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, h, x;
  cin >> n >> h >> x;

  for (ui i = 1; i <= n; i++)
  {
    ui p;
    cin >> p;

    if (h + p >= x)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}