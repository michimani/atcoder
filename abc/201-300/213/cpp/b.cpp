#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

bool comp(pair<ui, ui> &l, pair<ui, ui> &r)
{
  return l.second < r.second;
}

int main()
{
  ui n;
  cin >> n;

  vector<pair<ui, ui>> a(n);
  for (ui i = 1; i <= n; i++)
  {
    a[i - 1].first = i;
    cin >> a[i - 1].second;
  }

  sort(a.rbegin(), a.rend(), comp);

  cout << a[1].first << endl;

  return 0;
}