#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<char>> a(n, vector<char>(n, '.'));
  for (auto &ar : a)
    for (auto &ac : ar)
      cin >> ac;

  vector<vector<char>> b(n, vector<char>(n, '.'));
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      cin >> b[i][j];

      if (b[i][j] != a[i][j])
      {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}