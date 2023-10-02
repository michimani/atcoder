#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    if (num % 2 == 1)
    {
      ans = 0;
      break;
    }

    int ans_tmp = 0;
    while (num % 2 == 0)
    {
      num /= 2;
      ans_tmp++;
    }

    if (ans_tmp < ans || ans == 0)
    {
      ans = ans_tmp;
    }
  }

  cout << ans << endl;
}