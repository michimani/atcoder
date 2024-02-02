#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  ui ans = 0;
  for (ui i = l1; i <= r1; i++)
  {
    for (ui j = l2; j <= r2; j++)
    {
      ans += ui(i == j);
    }
  }

  ans -= ui(ans > 0);

  cout << ans << endl;
}