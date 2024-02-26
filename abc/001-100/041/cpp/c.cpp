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

  vector<pair<ui, ui>> sv(n);
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    sv[i] = {i + 1, a};
  }

  sort(sv.rbegin(), sv.rend(), comp);

  for (auto s : sv)
    cout << s.first << endl;

  return 0;
}