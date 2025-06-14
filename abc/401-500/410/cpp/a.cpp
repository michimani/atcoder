#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n);
  for (auto &aa : a)
    cin >> aa;

  ui k;
  cin >> k;

  ui ans = 0;
  for (auto &aa : a)
    ans += ui(k <= aa);

  cout << ans << endl;

  return 0;
}