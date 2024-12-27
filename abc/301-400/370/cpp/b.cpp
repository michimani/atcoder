#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<ui>> a(n, vector<ui>(n, 0));
  for (ui i = 1; i <= n; i++)
    for (ui j = 0; j < i; j++)
      cin >> a[i - 1][j];

  ui g = 1;
  for (ui tg = 1; tg <= n; tg++)
  {
    if (g >= tg)
      g = a[g - 1][tg - 1];
    else
      g = a[tg - 1][g - 1];
  }

  cout << g << endl;

  return 0;
}