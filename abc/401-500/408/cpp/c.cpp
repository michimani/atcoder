#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<pair<ui, ui>> ranges(m);
  for (ui i = 0; i < m; i++)
  {
    cin >> ranges[i].first >> ranges[i].second;
  }

  sort(ranges.begin(), ranges.end());

  ui current_end = 0;
  bool has_uncovered = false;

  for (ui i = 0; i < m; i++)
  {
    if (ranges[i].first > current_end + 1)
    {
      if (current_end < n)
      {
        has_uncovered = true;
        break;
      }
    }
    current_end = max(current_end, ranges[i].second);
  }

  if (current_end < n)
    has_uncovered = true;

  if (has_uncovered)
  {
    cout << 0 << endl;
    return 0;
  }

  vector<pair<ui, ui>> diff;
  for (ui i = 0; i < m; i++)
  {
    diff.push_back({ranges[i].first, 1});
    diff.push_back({ranges[i].second + 1, -1});
  }
  sort(diff.begin(), diff.end());

  ui min_coverage = m + 1;
  ui current_coverage = 0;

  for (ui i = 0; i < diff.size(); i++)
  {

    ui pos = diff[i].first;
    ui delta = 0;

    while (i < diff.size() && diff[i].first == pos)
    {
      delta += diff[i].second;
      i++;
    }
    i--;

    current_coverage += delta;

    if (pos >= 1 && pos <= n && current_coverage > 0)
      min_coverage = min(min_coverage, current_coverage);
  }

  cout << min_coverage << endl;
  return 0;
}