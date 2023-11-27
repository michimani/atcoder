#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> grid;
    for (int i = 0; i < 3; i++)
    {
        vector<int> row;
        for (int j = 0; j < 3; j++)
        {
            int c;
            cin >> c;
            row.push_back(c);
        }
        grid.push_back(row);
    }

    string ans = "Yes";

    vector<int> a(3, 0), b(3, 0);

    for (unsigned long j = 0; j < 3; j++)
    {
        if (
            (grid[0][j % 3] - grid[0][(j + 1) % 3] != grid[1][j % 3] - grid[1][(j + 1) % 3]) ||
            (grid[1][j % 3] - grid[1][(j + 1) % 3] != grid[2][j % 3] - grid[2][(j + 1) % 3]) ||
            (grid[2][j % 3] - grid[2][(j + 1) % 3] != grid[0][j % 3] - grid[0][(j + 1) % 3]))
        {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
}
