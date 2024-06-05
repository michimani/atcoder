#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  if (m >= x)
    cout << t << endl;
  else
    cout << t - (x - m) * d << endl;

  return 0;
}