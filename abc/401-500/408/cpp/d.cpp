#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
using ui = unsigned int;

ui solve(const string &s)
{
  ui n = s.length();
  if (n == 1)
    return 0;

  vector<ui> ones_poss;
  for (ui i = 0; i < n; i++)
    if (s[i] == '1')
      ones_poss.push_back(i);

  ui ones_count = ones_poss.size();

  if (ones_count == 0)
    return 0;

  if (ones_count == n)
    return 0;

  ui min_ops = ones_count;

  for (ui i = 0; i < ones_count; i++)
  {
    for (ui j = i; j < ones_count; j++)
    {
      ui left_pos = ones_poss[i];
      ui right_pos = ones_poss[j];

      ui ones_outside = i + (ones_count - 1 - j);

      ui range_length = right_pos - left_pos + 1;
      ui ones_in_range = j - i + 1;
      ui zeros_in_range = range_length - ones_in_range;

      ui operations = ones_outside + zeros_in_range;
      min_ops = min(min_ops, operations);
    }
  }

  return min_ops;
}

int main()
{
  ui t;
  cin >> t;

  while (t--)
  {
    ui n;
    string s;
    cin >> n >> s;

    cout << solve(s) << endl;
  }

  return 0;
}