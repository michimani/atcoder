#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui t = 0;
  for (ui i = 1; i <= 7 * n; i++)
  {
    ui a;
    cin >> a;
    t += a;
    if (i % 7 == 0)
    {
      cout << t;
      t = 0;

      if (i < 7 * n)
        cout << " ";
    }
  }

  cout << endl;

  return 0;
}