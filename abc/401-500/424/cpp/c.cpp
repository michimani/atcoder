#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<pair<int, int>> s(n + 1);
  vector<vector<int>> depends(n + 1);

  for (int i = 1; i <= n; i++)
  {
    cin >> s[i].first >> s[i].second;
    if (s[i].first != 0)
      depends[s[i].first].push_back(i);
    if (s[i].second != 0)
      depends[s[i].second].push_back(i);
  }

  vector<bool> l(n + 1, false);
  queue<int> q;

  for (int i = 1; i <= n; i++)
  {
    if (s[i].first == 0 && s[i].second == 0)
    {
      l[i] = true;
      q.push(i);
    }
  }

  while (!q.empty())
  {
    int current = q.front();
    q.pop();

    for (int dependent : depends[current])
    {
      if (!l[dependent])
      {
        if ((s[dependent].first == 0 || l[s[dependent].first]) || (s[dependent].second == 0 || l[s[dependent].second]))
        {
          l[dependent] = true;
          q.push(dependent);
        }
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++)
    if (l[i])
      ans++;

  cout << ans << endl;

  return 0;
}
