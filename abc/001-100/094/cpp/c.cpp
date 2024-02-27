#include <iostream>
#include <vector>
#include <map>
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

  vector<pair<ui, ui>> x(n);
  for (ui i = 0; i < n; i++)
  {
    ui xx;
    cin >> xx;
    x[i] = {i, xx};
  }

  sort(x.begin(), x.end(), comp);

  map<ui, ui> iti; // org -> sorted;
  for (ui i = 0; i < n; i++)
    iti[x[i].first] = i;

  ui mid = n / 2 - 1;
  for (ui i = 0; i < n; i++)
  {
    if (iti[i] <= mid)
      cout << x[mid + 1].second << endl;
    else
      cout << x[mid].second << endl;
  }

  return 0;
}