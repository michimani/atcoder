#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui mx = 0;
  ui t = 0;
  for (; n--;)
  {
    ui l;
    cin >> l;

    t += l;
    mx = max(mx, l);
  }

  t -= mx;

  cout << (mx < t ? "Yes" : "No") << endl;

  return 0;
}