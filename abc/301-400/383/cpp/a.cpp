#include <iostream>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  int pt = 0;
  int pv = 0;
  for (; n--;)
  {
    int t, v;
    cin >> t >> v;

    pv = max(0, pv - (t - pt)) + v;
    pt = t;
  }

  cout << pv << endl;

  return 0;
}