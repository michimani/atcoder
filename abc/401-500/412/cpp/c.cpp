#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> s(n + 1);

    for (int i = 1; i <= n; i++)
      cin >> s[i];

    if (n == 1)
    {
      cout << 1 << endl;
      continue;
    }

    multiset<pair<ll, int>> available;
    for (int i = 1; i <= n; i++)
      available.insert({s[i], i});

    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 1;
    available.erase(available.find({s[1], 1}));

    while (!q.empty() && dist[n] == -1)
    {
      int sz = q.size();
      for (int k = 0; k < sz; k++)
      {
        int u = q.front();
        q.pop();

        ll limit = 2LL * s[u];

        auto it = available.upper_bound({limit, n + 1});
        vector<multiset<pair<ll, int>>::iterator> to_remove;

        for (auto it2 = available.begin(); it2 != it; ++it2)
        {
          int v = it2->second;
          dist[v] = dist[u] + 1;
          q.push(v);
          to_remove.push_back(it2);
        }

        for (auto &iter : to_remove)
          available.erase(iter);
      }
    }

    cout << dist[n] << endl;
  }

  return 0;
}