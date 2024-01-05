#include <iostream>
#include <map>

using namespace std;
using ull = unsigned long long;

ull nc2(ull n)
{
  return (n * (n - 1)) / 2;
}

int main()
{
  ull n = 0;
  cin >> n;

  map<ull, ull> m;
  for (ull i = 0; i < n; i++)
  {
    ull a;
    cin >> a;

    if (m.count(a) == 0)
    {
      m[a] = 1;
    }
    else
    {
      m[a]++;
    }
  }

  ull ans = nc2(n);
  auto it = m.begin();
  while (it != m.end())
  {
    if (it->second > 1)
    {
      ans -= nc2(it->second);
    }
    it++;
  }

  cout << ans << endl;
  return 0;
}