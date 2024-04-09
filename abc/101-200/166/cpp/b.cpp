#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<bool> s(n, false);
  for (; k--;)
  {
    ui d;
    cin >> d;
    for (; d--;)
    {
      ui a;
      cin >> a;
      s[a - 1] = true;
    }
  }

  ui ans = 0;
  for (auto ss : s)
    ans += ui(!ss);

  cout << ans << endl;
  return 0;
}