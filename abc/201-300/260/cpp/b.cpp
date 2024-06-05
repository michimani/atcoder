#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool compA(pair<ui, pair<ui, ui>> &l, pair<ui, pair<ui, ui>> &r)
{
  if (l.second.first != r.second.first)
    return l.second.first > r.second.first;
  return l.first < r.first;
}

bool compB(pair<ui, pair<ui, ui>> &l, pair<ui, pair<ui, ui>> &r)
{
  if (l.second.second != r.second.second)
    return l.second.second > r.second.second;
  return l.first < r.first;
}

bool compC(pair<ui, pair<ui, ui>> &l, pair<ui, pair<ui, ui>> &r)
{
  if (l.second.first + l.second.second != r.second.first + r.second.second)
    return l.second.first + l.second.second > r.second.first + r.second.second;
  return l.first < r.first;
}

void out(vector<ui> &v)
{
  sort(v.begin(), v.end());
  for (auto &vv : v)
    cout << vv << endl;
}

int main()
{
  ui n, x, y, z;
  cin >> n >> x >> y >> z;

  vector<ui> ans;

  vector<pair<ui, pair<ui, ui>>> s(n);
  for (ui i = 0; i < n; i++)
  {
    cin >> s[i].second.first;
    s[i].first = i + 1;
  }

  for (ui i = 0; i < n; i++)
    cin >> s[i].second.second;

  sort(s.rbegin(), s.rend(), compA);
  for (ui i = 0; i < x; i++)
  {
    ans.push_back(s[s.size() - 1].first);
    s.pop_back();
  }

  if (s.size() == 0)
  {
    out(ans);
    return 0;
  }

  sort(s.rbegin(), s.rend(), compB);
  for (ui i = 0; i < y; i++)
  {
    ans.push_back(s[s.size() - 1].first);
    s.pop_back();
  }

  if (s.size() == 0)
  {
    out(ans);
    return 0;
  }

  sort(s.begin(), s.end(), compC);
  for (ui i = 0; i < z; i++)
    ans.push_back(s[i].first);

  out(ans);
  return 0;
}