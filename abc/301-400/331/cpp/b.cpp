#include <iostream>

using namespace std;

void calc(int &n, int &s, int &m, int &l, int c_n, int c_sum, int &ans)
{
  if (c_n >= n)
  {
    if (ans < 0 || c_sum <= ans)
    {
      ans = c_sum;
    }
    return;
  }

  // +s
  calc(n, s, m, l, c_n + 6, c_sum + s, ans);

  // +m
  calc(n, s, m, l, c_n + 8, c_sum + m, ans);

  // +l
  calc(n, s, m, l, c_n + 12, c_sum + l, ans);
}

int main()
{
  int n, s, m, l;
  cin >> n >> s >> m >> l;

  int ans = -1;
  calc(n, s, m, l, 0, 0, ans);

  cout << ans << endl;
  return 0;
}