#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  int r;
  cin >> n >> r;

  ui d = 0;
  int a = 0;
  for (; n--;)
  {
    cin >> d >> a;
    if (d == 1 && 1600 <= r && r <= 2799)
      r += a;
    else if (d == 2 && 1200 <= r && r <= 2399)
      r += a;
  }

  cout << r << endl;

  return 0;
}