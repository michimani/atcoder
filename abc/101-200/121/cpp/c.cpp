#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ull, ui> cm;
  ull a = 0;
  ui b = 0;
  for (; n--;)
  {
    cin >> a >> b;
    cm[a] += b;
  }

  auto it = cm.begin();
  ull ans = 0;
  while (it != cm.end())
  {
    if (m >= it->second)
    {
      ans += it->first * it->second;
      m -= it->second;
    }
    else
    {
      ans += it->first * m;
      m = 0;
    }

    if (m == 0)
      break;

    it++;
  }

  cout << ans << endl;
  return 0;
}