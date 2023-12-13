#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  vector<vector<unsigned int>> graph(n + 1, vector<unsigned int>());
  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  unsigned int ans = m;
  vector<bool> used(n + 1, false);

  for (unsigned int i = 1; i <= n; i++)
  {
    if (used[i])
    {
      continue;
    }

    used[i] = true;
    unsigned int s_v = 1;
    stack<unsigned int> targets;
    targets.push(i);
    while (!targets.empty())
    {
      unsigned int target = targets.top();
      targets.pop();
      for (auto &t : graph[target])
      {
        if (used[t])
        {
          continue;
        }

        used[t] = true;
        targets.push(t);
        s_v++;
      }
    }

    ans -= (s_v - 1);
  }

  cout << ans << endl;

  return 0;
}