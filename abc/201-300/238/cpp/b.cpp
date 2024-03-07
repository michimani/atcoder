#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> cut = {{0, true}};
  ui t = 0;
  for (; n--;)
  {
    ui a;
    cin >> a;
    t += a;
    cut[t % 360] = true;
  }

  ui ans = 360 - cut.rbegin()->first;
  auto it = cut.begin();
  ui prev = 0;
  while (it != cut.end())
  {
    ans = max(ans, it->first - prev);
    prev = it->first;
    it++;
  }

  cout << ans << endl;
  return 0;
}