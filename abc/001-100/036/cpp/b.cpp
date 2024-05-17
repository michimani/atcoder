#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<char>> g(n, vector<char>(n, '.'));
  for (ui i = 0; i < n; i++)
    for (ui j = 0; j < n; j++)
      cin >> g[j][n - 1 - i];

  for (auto r : g)
  {
    for (auto c : r)
      cout << c;
    cout << endl;
  }

  return 0;
}