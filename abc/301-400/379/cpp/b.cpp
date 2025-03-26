#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui ans = 0;
  char c = '_';
  ui t = 0;
  for (; n--;)
  {
    cin >> c;
    if (c == 'X')
      t = 0;
    else
      t++;

    if (t >= k)
    {
      ans++;
      t = 0;
    }
    ans += ui(t >= k);
  }

  cout << ans << endl;

  return 0;
}