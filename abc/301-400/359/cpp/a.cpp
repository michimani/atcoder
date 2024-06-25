#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui ans = 0;
  for (; n--;)
  {
    string s;
    cin >> s;
    ans += ui(s == "Takahashi");
  }

  cout << ans << endl;

  return 0;
}