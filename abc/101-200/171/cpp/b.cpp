#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<ui> p(n, 0);
  for (auto &pp : p)
    cin >> pp;

  sort(p.begin(), p.end());

  ui ans = 0;
  for (ui i = 0; i < k; i++)
    ans += p[i];

  cout << ans << endl;

  return 0;
}