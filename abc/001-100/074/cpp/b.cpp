#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  int k;
  cin >> n >> k;

  ui ans = 0;
  for (; n--;)
  {
    int x;
    cin >> x;

    ans += ui(min(x, abs(x - k))) * 2;
  }

  cout << ans << endl;

  return 0;
}