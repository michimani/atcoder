#include <iostream>

using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;

  r = abs(r - 8);
  c = abs(c - 8);

  string ans = "black";
  if (r % 2 == 0)
  {
    if (c % 2 == 0 || c < r)
    {
      ans = "white";
    }
  }
  else
  {
    if (c % 2 == 0 && c > r)
    {
      ans = "white";
    }
  }

  cout << ans << endl;

  return 0;
}