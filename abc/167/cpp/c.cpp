#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int count_ok(unsigned int x, vector<unsigned int> A)
{
  int c = 0;
  for (unsigned int i = 1; i < A.size(); i++)
  {
    if (A[i] >= x)
    {
      c++;
    }
  }

  return c;
}

void rec_plus(vector<vector<unsigned int>> list, unsigned int x, unsigned int n, unsigned int m, unsigned int caidx, vector<unsigned int> now, int &ans)
{
  if (count_ok(x, now) == int(m) && (ans < 0 || int(now[0]) < ans))
  {
    ans = int(now[0]);
    return;
  };

  if (caidx == n)
  {
    return;
  }

  vector<unsigned int> added_now = now;
  for (unsigned int i = 0; i <= m; i++)
  {
    added_now[i] += list[caidx][i];
  }

  caidx++;
  rec_plus(list, x, n, m, caidx, now, ans);
  rec_plus(list, x, n, m, caidx, added_now, ans);
}

int main()
{
  unsigned int n, m, x;
  cin >> n >> m >> x;

  vector<vector<unsigned int>> ca_list(n);
  vector<unsigned int> all(m + 1, 0);
  for (unsigned int ni = 0; ni < n; ni++)
  {
    vector<unsigned int> ca(m + 1, 0); // c, a1, a2, ..., am
    for (unsigned int mi = 0; mi < m + 1; mi++)
    {
      unsigned int c_or_a;
      cin >> c_or_a;
      ca[mi] = c_or_a;
      all[mi] += c_or_a;
    }
    ca_list[ni] = ca;
  }

  for (unsigned int ai = 1; ai < m; ai++)
  {
    if (all[ai] < x)
    {
      cout << "-1" << endl;
      return 0;
    }
  }

  int ans = -1;
  vector<unsigned int> now(m + 1, 0);
  rec_plus(ca_list, x, n, m, 0, now, ans);

  cout << ans << endl;
}
