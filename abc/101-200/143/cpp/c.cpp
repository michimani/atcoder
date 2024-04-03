#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  char p = '.';
  for (; n--;)
  {
    char c;
    cin >> c;
    ans += ui(p != c);
    p = c;
  }

  cout << ans << endl;
  return 0;
}