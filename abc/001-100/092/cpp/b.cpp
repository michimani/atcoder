#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d, x;
  cin >> n >> d >> x;

  ui e = n;
  for (; n--;)
  {
    ui a;
    cin >> a;

    for (ui dd = a + 1; dd <= d; dd += a)
      e += 1;
  }

  cout << x + e << endl;

  return 0;
}