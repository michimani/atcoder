#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  unsigned long n, m;
  cin >> n >> m;
  map<unsigned long, unsigned long> presents;
  vector<unsigned long> pidx;

  for (unsigned long i = 0; i < n; i++)
  {
    unsigned long a = 0;
    cin >> a;
    if (presents.count(a) == 0)
    {
      presents[a] = 1;
      pidx.push_back(a);
    }
    else
    {
      presents[a]++;
    }
  }

  sort(pidx.begin(), pidx.end());

  unsigned long ans = 0;
  unsigned long remain = n;
  unsigned long prev = 0;
  unsigned long last_pidx = 0;
  for (unsigned long i = 0; i < pidx.size(); i++)
  {
    if (remain < ans)
    {
      break;
    }

    unsigned long ans_tmp = 0;
    if (i == 0)
    {
      for (unsigned long ii = i; ii < pidx.size(); ii++)
      {
        if (pidx[ii] >= pidx[i] + m)
        {
          break;
        }
        ans_tmp += presents[pidx[ii]];
        last_pidx = ii;
      }
    }
    else
    {
      ans_tmp = prev - presents[pidx[i - 1]];
      for (unsigned long ii = last_pidx + 1; ii < pidx.size(); ii++)
      {
        if (pidx[ii] >= pidx[i] + m)
        {
          break;
        }
        ans_tmp += presents[pidx[ii]];
        last_pidx = ii;
      }
    }

    prev = ans_tmp;

    if (ans_tmp > ans)
    {
      ans = ans_tmp;
    }
    remain -= presents[pidx[i]];
  }

  cout << ans << endl;
}