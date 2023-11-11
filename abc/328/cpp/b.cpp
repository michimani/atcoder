#include <iostream>

using namespace std;

int main()
{
  unsigned int n = 0;
  cin >> n;
  int ans = 0;

  for (unsigned int i = 1; i <= n; i++)
  {
    int d = 0;
    cin >> d;

    string i_str = to_string(i);
    if (i < 10)
    {
      if (d >= i)
      {
        ans++;
      }

      if (d >= i * 10 + i)
      {
        ans++;
      }
    }
    else if (i_str[0] == i_str[1])
    {
      if (d >= int(i_str[0] - '0'))
      {
        ans++;
      }
      if (d >= i)
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
}