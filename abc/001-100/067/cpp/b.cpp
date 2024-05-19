#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<ui> l(n, 0);
  for (auto &ll : l)
    cin >> ll;

  sort(l.rbegin(), l.rend());
  ui ans = 0;
  for (ui i = 0; i < k; i++)
    ans += l[i];

  cout << ans << endl;

  return 0;
}