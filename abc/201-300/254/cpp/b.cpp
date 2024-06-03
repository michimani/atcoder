#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<ui>> A(n, vector<ui>(n + 1, 0));
  for (ui i = 0; i < n; i++)
  {
    string a = "";
    for (ui j = 0; j <= i; j++)
    {
      A[i][j] = 1;
      if (j != 0 && i != j)
        A[i][j] = A[i - 1][j - 1] + A[i - 1][j];

      a += to_string(A[i][j]) + " ";
    }
    a.pop_back();
    cout << a << endl;
  }

  return 0;
}