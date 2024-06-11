#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, l, r;
  cin >> n >> l >> r;

  for (ui i = 1; i <= n; i++)
  {
    if (i > 1)
      cout << " ";

    if (l <= i && i <= r)
      cout << r - (i - l);
    else
      cout << i;
  }

  cout << endl;

  return 0;
}