#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<ui>> A(n, vector<ui>(n, 0));
  vector<vector<ui>> B(n, vector<ui>(n, 0));

  for (auto &aa : A)
    for (auto &a : aa)
      cin >> a;

  for (auto &bb : B)
    for (auto &b : bb)
      cin >> b;

  ui c = 0;
  while (c < 4)
  {
    vector<vector<ui>> tmpA(n, vector<ui>(n, 0));
    bool neq = false;
    for (ui i = 0; i < n; i++)
    {
      for (ui j = 0; j < n; j++)
      {
        tmpA[i][j] = A[n - 1 - j][i];
        if (tmpA[i][j] == 1 && tmpA[i][j] != B[i][j])
        {
          neq = true;
        }
      }
    }

    if (!neq)
    {
      cout << "Yes" << endl;
      return 0;
    }

    A = tmpA;

    c++;
  }

  cout << "No" << endl;

  return 0;
}