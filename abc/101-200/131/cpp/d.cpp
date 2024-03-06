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

  vector<pair<ui, ui>> w(n);
  for (auto &ww : w)
    cin >> ww.first >> ww.second;

  sort(w.begin(), w.end(), comp);

  ui t = 0;
  for (auto &ww : w)
  {
    t += ww.first;
    if (t > ww.second)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}