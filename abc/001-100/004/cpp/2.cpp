#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<vector<char>> g(4, vector<char>(4, '.'));
  for (ui i = 0; i < 4; i++)
    for (ui j = 0; j < 4; j++)
      cin >> g[4 - 1 - i][4 - 1 - j];

  for (ui i = 0; i < 4; i++)
  {
    for (ui j = 0; j < 4; j++)
    {
      if (j > 0)
        cout << " ";
      cout << g[i][j];
    }
    cout << endl;
  }

  return 0;
}