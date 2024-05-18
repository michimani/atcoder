#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  int x = 0;
  int mx = 0;
  for (; n--;)
  {
    char c;
    cin >> c;
    if (c == 'I')
      x++;
    else
      x--;

    mx = max(mx, x);
  }

  cout << mx << endl;
  return 0;
}