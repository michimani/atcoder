#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  ui mn = 1000;
  ui mx = 0;

  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
  }

  cout << mx - mn << endl;
  return 0;
}