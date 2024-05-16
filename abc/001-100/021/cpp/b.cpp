#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;
  ui a, b;
  cin >> a >> b;
  ui k;
  cin >> k;

  vector<ui> p(k, 0);
  map<ui, bool> visited = {{a, true}, {b, true}};
  for (ui i = 0; i < k; i++)
  {
    cin >> p[i];

    if (visited.count(p[i]) > 0)
    {
      cout << "NO" << endl;
      return 0;
    }

    visited[p[i]] = true;
  }

  cout << "YES" << endl;
  return 0;
}