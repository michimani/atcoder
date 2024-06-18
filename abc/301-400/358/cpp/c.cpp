#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> ss(n);
  for (auto &s : ss)
    cin >> s;

  sort(ss.begin(), ss.end());

  ui ans = n;
  do
  {
    ui ta = 1;
    set<ui> p;
    for (auto &s : ss)
    {
      for (ui i = 0; i < m; i++)
        if (s[i] == 'o')
          p.insert(i);

      if (p.size() == m)
        break;

      ta++;
    }

    ans = min(ans, ta);

  } while (next_permutation(ss.begin(), ss.end()));

  cout << ans << endl;

  return 0;
}