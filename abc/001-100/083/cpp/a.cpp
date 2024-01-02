#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, d;
  cin >> a >> b >> c >> d;

  string ans = "Balanced";
  if (a + b > c + d)
  {
    ans = "Left";
  }
  else if (a + b < c + d)
  {
    ans = "Right";
  }

  cout << ans << endl;

  return 0;
}