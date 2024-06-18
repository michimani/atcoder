#include <iostream>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  ull a;
  cin >> n >> a;

  ull pt = 0;
  for (; n--;)
  {
    ull t;
    cin >> t;

    if (pt > t)
      t = pt;
    t += a;

    cout << t << endl;
    pt = t;
  }

  return 0;
}