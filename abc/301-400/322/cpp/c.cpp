#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  ui nn = 1;
  for (ui i = 0; i < m; i++)
  {
    ui a;
    cin >> a;

    if (a == nn)
    {
      cout << 0 << endl;
    }
    else
    {
      for (ui j = 0; j <= a - nn; j++)
      {
        cout << a - (nn + j) << endl;
      }
    }
    nn = a + 1;
  }

  return 0;
}