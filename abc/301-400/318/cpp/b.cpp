#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<vector<bool>> grid(101, vector<bool>(101, false));

  unsigned int n;
  cin >> n;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (unsigned int y = c; y < d; y++)
    {
      for (unsigned int x = a; x < b; x++)
      {
        grid[y][x] = true;
      }
    }
  }

  int ans = 0;
  for (unsigned int i = 0; i <= 100; i++)
  {
    for (unsigned int j = 0; j <= 100; j++)
    {
      ans += int(grid[i][j]);
    }
  }

  cout << ans << endl;
  return 0;
}