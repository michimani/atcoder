#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<char>> r(n, vector<char>(n, '-'));
  for (auto &rr : r)
  {
    for (auto &rrr : rr)
    {
      cin >> rrr;
    }
  }

  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      if (i == j)
      {
        continue;
      }

      if (!((r[i][j] == 'W' && r[j][i] == 'L') ||
            (r[i][j] == 'L' && r[j][i] == 'W') ||
            (r[i][j] == 'D' && r[j][i] == 'D')))
      {
        cout << "incorrect" << endl;
        return 0;
      }
    }
  }

  cout << "correct" << endl;
  return 0;
}