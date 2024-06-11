#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool comp(pair<ui, char> &l, pair<ui, char> &r)
{
  return l.first < r.first;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<pair<ui, char>> c(n + m);
  ui i = 0;

  for (; i < n; i++)
  {
    cin >> c[i].first;
    c[i].second = 'a';
  }
  for (; i < m + n; i++)
  {
    cin >> c[i].first;
    c[i].second = 'b';
  }

  sort(c.begin(), c.end(), comp);

  char p = '.';
  for (auto &cc : c)
  {
    if (cc.second == p && cc.second == 'a')
    {
      cout << "Yes" << endl;
      return 0;
    }

    p = cc.second;
  }

  cout << "No" << endl;

  return 0;
}