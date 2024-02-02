#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, p, q;
  cin >> n >> p >> q;

  ui mnd = 100000;
  for (ui i = 0; i < n; i++)
  {
    ui d;
    cin >> d;
    mnd = min(mnd, d);
  }

  cout << min(p, q + mnd) << endl;
  return 0;
}