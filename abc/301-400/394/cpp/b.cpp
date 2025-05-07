#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<pair<ui, string>> s(n);
  string ss;
  for (ui i = 0; i < n; i++)
  {
    cin >> ss;
    s[i] = {ui(ss.length()), ss};
  }

  sort(s.begin(), s.end(),
       [](const pair<ui, string> &a, const pair<ui, string> &b)
       { return a.first < b.first; });

  for (auto &ss : s)
    cout << ss.second;

  cout << endl;

  return 0;
}