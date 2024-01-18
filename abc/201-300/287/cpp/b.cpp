#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (auto &ss : s)
  {
    cin >> ss;
  }

  map<ui, bool> sm;
  for (ui j = 0; j < m; j++)
  {
    string ti;
    cin >> ti;
    for (ui i = 0; i < n; i++)
    {
      if (s[i].substr(3) == ti)
      {
        sm[i] = true;
      }
    }
  }

  cout << sm.size() << endl;
  return 0;
}