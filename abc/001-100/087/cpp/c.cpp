#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<vector<ui>> A(2, vector<ui>(n, 0));
  for (auto &aa : A)
  {
    for (auto &aaa : aa)
    {
      cin >> aaa;
    }
  }

  ui ans = 0;
  for (ui d = 0; d < n; d++)
  {
    bool is_down = false;
    ui ans_tmp = 0;
    for (int i = 0; i < int(n); i++)
    {
      ans_tmp += A[ui(is_down)][ui(i)];
      if (!is_down && ui(i) == d)
      {
        is_down = true;
        i--;
      }
    }

    ans = max(ans, ans_tmp);
  }

  cout << ans << endl;
  return 0;
}