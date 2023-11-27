#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;
  string dummy(w + 2, '.');
  vector<string> grid(h + 2, dummy);
  for (unsigned int i = 1; i <= h; i++)
  {
    string s;
    cin >> s;
    grid[i] = "." + s + ".";
  }

  for (unsigned int i = 1; i <= h; i++)
  {
    for (unsigned int j = 1; j <= w; j++)
    {
      if (grid[i][j] == '#')
      {
        cout << grid[i][j];
        continue;
      }
      int bomb = int(grid[i - 1][j - 1] == '#') +
                 int(grid[i - 1][j] == '#') +
                 int(grid[i - 1][j + 1] == '#') +
                 int(grid[i][j - 1] == '#') +
                 int(grid[i][j + 1] == '#') +
                 int(grid[i + 1][j - 1] == '#') +
                 int(grid[i + 1][j] == '#') +
                 int(grid[i + 1][j + 1] == '#');

      cout << bomb;
    }

    cout << endl;
  }
}