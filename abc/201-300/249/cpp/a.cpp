#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  ui td = (x / (a + c)) * a * b + min(x % (a + c), a) * b;
  ui ad = (x / (d + f)) * d * e + min(x % (d + f), d) * e;

  string ans = "Draw";
  if (td > ad)
    ans = "Takahashi";
  else if (td < ad)
    ans = "Aoki";

  cout << ans << endl;

  return 0;
}