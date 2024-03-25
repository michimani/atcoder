#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui ans = 0;
  for (; n--;)
  {
    ui h;
    cin >> h;
    ans += ui(h >= k);
  }

  cout << ans << endl;
  return 0;
}