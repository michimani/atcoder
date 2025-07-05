#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<string> s(n);
  for (auto &ss : s)
    cin >> ss;

  unordered_set<string> p = {};
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      p.insert(s[i] + s[j]);
    }
  }

  cout << p.size() << endl;

  return 0;
}