#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool comp(pair<ui, long> &l, pair<ui, long> &r)
{
  if (l.second != r.second)
    return l.second > r.second;

  return l.first < r.first;
}

int main()
{
  ui n;
  long x, y;
  cin >> n >> x >> y;

  vector<pair<ui, long>> a(n), b(n);
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i].second;
    a[i].first = i;
  }
  for (ui i = 0; i < n; i++)
  {
    cin >> b[i].second;
    b[i].first = i;
  }

  vector<pair<ui, long>> sa = a;
  vector<pair<ui, long>> sb = b;

  long ax = x, ay = y;
  long bx = x, by = y;

  sort(sa.begin(), sa.end(), comp);
  sort(sb.begin(), sb.end(), comp);

  ui ans = n;
  for (ui i = 0; i < n; i++)
  {
    // a base
    if (ax >= 0 && ay >= 0)
    {
      ax -= sa[i].second;
      ay -= b[sa[i].first].second;

      if (ax < 0 || ay < 0)
      {
        ans = i + 1;
        break;
      }
    }

    // b base
    if (bx >= 0 && by >= 0)
    {
      bx -= a[sb[i].first].second;
      by -= sb[i].second;

      if (bx < 0 || by < 0)
      {
        ans = i + 1;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}