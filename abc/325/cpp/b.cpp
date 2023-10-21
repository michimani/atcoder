#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n = 0;
  cin >> n;

  map<int, int> xw;
  for (int i = 0; i < n; i++)
  {
    int w, x;
    cin >> w >> x;

    if (xw.count(x) == 0)
    {
      xw[x] = w;
    }
    else
    {
      xw[x] += w;
    }
  }

  int ans = 0;

  for (int h = 0; h < 24; h++)
  {
    int ans_tmp = 0;
    auto iter = xw.begin();
    while (iter != xw.end())
    {
      if ((iter->first + h) % 24 >= 9 && (iter->first + h) % 24 < 18)
      {
        ans_tmp += iter->second;
      }

      iter++;
    }

    if (ans_tmp > ans)
    {
      ans = ans_tmp;
    }
  }

  cout << ans << endl;
}