#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  ui a, b;
  for (; n--;)
  {
    cin >> a >> b;
    ans += ui(a < b);
  }

  cout << ans << endl;

  return 0;
}