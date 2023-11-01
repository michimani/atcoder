#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void calc(vector<vector<int>> &f, vector<vector<int>> &p, vector<int> a, unsigned int idx, int &ans)
{
  if (idx == a.size())
  {
    int open = 0;
    int ans_tmp = 0;
    for (unsigned int i = 0; i < f.size(); i++)
    {
      unsigned int dup = 0;
      for (unsigned int j = 0; j < f[i].size(); j++)
      {
        dup += (unsigned int)(a[j] == 1 && f[i][j] == 1);
      }

      open = max(open, int(dup));
      ans_tmp += p[i][dup];
    }

    if (open > 0)
    {
      ans = max(ans, ans_tmp);
    }
    return;
  }

  // not open
  calc(f, p, a, idx + 1, ans);

  // open
  a[idx] = 1;
  calc(f, p, a, idx + 1, ans);
}

int main()
{
  unsigned int n = 1;
  cin >> n;

  vector<int> f_base(10, 0);
  vector<vector<int>> F(n, f_base);
  for (unsigned int i = 0; i < n; i++)
  {
    for (auto &f : F[i])
    {
      cin >> f;
    }
  }

  vector<int> p_base(11, 0);
  vector<vector<int>> P(n, p_base);
  for (unsigned int i = 0; i < n; i++)
  {
    for (auto &p : P[i])
    {
      cin >> p;
    }
  }

  vector<int> a(10, 0);
  int ans = -1000000000;
  calc(F, P, a, 0, ans);

  cout << ans << endl;

  return 0;
}