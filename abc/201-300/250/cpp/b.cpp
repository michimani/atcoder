#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n, a, b;
  cin >> n >> a >> b;

  unsigned int rows_max = min((unsigned int)(2), n);
  vector<string> rows(rows_max, "");

  vector<vector<char>> cc = {{'.', '#'}, {'#', '.'}};

  for (unsigned int ri = 0; ri < rows_max; ri++)
  {
    vector<char> c = cc[ri % 2];
    string row(n * b, '_');
    for (unsigned int r = 0; r < n * b; r++)
    {
      row[r] = c[(unsigned int)((r / b) % 2 != 0)];
    }
    rows[ri] = row;
  }

  for (unsigned int i = 0; i < n * a; i++)
  {
    cout << rows[(unsigned int)((i / a) % 2 != 0)] << endl;
  }

  return 0;
}