#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui t;
  cin >> t;

  for (; t--;)
  {
    ui n;
    ll m;
    cin >> n >> m;

    vector<ll> a(n), b(n);
    for (ui i = 0; i < n; i++)
      cin >> a[i];
    for (ui i = 0; i < n; i++)
      cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll total = 0;
    multiset<ll> available(a.begin(), a.end());

    for (ui i = 0; i < n; i++)
    {
      ll bi = b[i];
      ll target = m - bi;
      
      auto it = available.lower_bound(target);
      ll best_val = (bi + *available.begin()) % m;
      auto best_it = available.begin();
      
      if (it != available.end())
      {
        ll val = (bi + *it) % m;
        if (val < best_val)
        {
          best_val = val;
          best_it = it;
        }
      }
      
      if (it != available.begin())
      {
        --it;
        ll val = (bi + *it) % m;
        if (val < best_val)
        {
          best_val = val;
          best_it = it;
        }
      }

      total += best_val;
      available.erase(best_it);
    }

    cout << total << endl;
  }

  return 0;
}
