#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int ans_tmp = 0;
  int ans = 0;
  for (int i = 0; i < 3; i++)
  {
    char c;
    cin >> c;

    if (c == 'R')
    {
      ans_tmp++;
    }
    else
    {
      ans = max(ans, ans_tmp);
      ans_tmp = 0;
    }
  }
  ans = max(ans, ans_tmp);

  cout << ans << endl;
  return 0;
}