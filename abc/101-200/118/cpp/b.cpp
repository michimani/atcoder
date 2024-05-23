#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> ac;
  for (ui i = 0; i < n; i++)
  {
    ui k;
    cin >> k;
    for (; k--;)
    {
      ui a;
      cin >> a;
      ac[a]++;
    }
  }

  ui ans = 0;
  for (auto &it : ac)
    ans += ui(it.second == n);

  cout << ans << endl;

  return 0;
}