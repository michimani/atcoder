#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  vector<int> base(9, 0);
  vector<vector<int>> grid(9, base);

  for (auto &r : grid)
  {
    for (auto &v : r)
    {
      cin >> v;
    }
  }

  // row
  for (unsigned int i = 0; i < 9; i++)
  {
    map<int, bool> nums;
    for (unsigned int j = 0; j < 9; j++)
    {
      if (nums.count(grid[i][j]) != 0)
      {
        cout << "No" << endl;
        return 0;
      }

      nums[grid[i][j]] = true;
    }
  }

  // column
  for (unsigned int j = 0; j < 9; j++)
  {
    map<int, bool> nums;
    for (unsigned int i = 0; i < 9; i++)
    {
      if (nums.count(grid[i][j]) != 0)
      {
        cout << "No" << endl;
        return 0;
      }

      nums[grid[i][j]] = true;
    }
  }

  // area
  for (unsigned int i = 0; i < 9; i += 3)
  {
    for (unsigned int j = 0; j < 9; j += 3)
    {
      map<int, bool> nums;
      for (unsigned int ii = 0; ii < 3; ii++)
      {
        for (unsigned int jj = 0; jj < 3; jj++)
        {
          if (nums.count(grid[i + ii][j + jj]) != 0)
          {
            cout << "No" << endl;
            return 0;
          }

          nums[grid[i + ii][j + jj]] = true;
        }
      }
    }
  }

  cout << "Yes" << endl;
}