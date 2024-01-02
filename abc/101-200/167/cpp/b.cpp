#include <iostream>
#include <cmath>
#include <map>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c, k;
  cin >> a >> b >> c >> k;
  vector<long> nl = {1, 0, -1};
  map<long, ui> nc = {
      {1, a},
      {0, b},
      {-1, c},
  };

  long ans = 0;
  for (auto &n : nl)
  {
    ui c = min(k, nc[n]);
    k -= c;
    ans += c * n;

    if (k == 0)
    {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}