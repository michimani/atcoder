#include <iostream>
#include <vector>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;
  vector<int> w_sum(n, 0);
  for (unsigned int i = 0; i < n; i++)
  {
    int w;
    cin >> w;
    if (i == 0)
    {
      w_sum[i] = w;
    }
    else
    {
      w_sum[i] = w_sum[i - 1] + w;
    }
  }

  int mn = 1000;
  for (unsigned int t = 0; t < n - 1; t++)
  {
    int s1 = w_sum[t];
    int s2 = w_sum[n - 1] - w_sum[t];
    int a = abs(s1 - s2);
    if (mn > a)
    {
      mn = a;
    }
  }

  cout << mn << endl;
  return 0;
}