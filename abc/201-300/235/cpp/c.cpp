#include <iostream>
#include <map>

using namespace std;

int main()
{
  unsigned int n, q;
  cin >> n >> q;

  map<unsigned int, map<unsigned int, unsigned int>> a_cnt_idx;
  map<unsigned int, unsigned int> a_cnt;
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int a;
    cin >> a;
    if (a_cnt.count(a) == 0)
    {
      a_cnt[a] = 0;
    }
    a_cnt[a]++;

    a_cnt_idx[a][a_cnt[a]] = i;
  }

  for (unsigned int j = 0; j < q; j++)
  {
    unsigned int x, k;
    cin >> x >> k;

    if (a_cnt_idx.count(x) == 0 || a_cnt_idx[x].count(k) == 0)
    {
      cout << "-1" << endl;
    }
    else
    {
      cout << a_cnt_idx[x][k] + 1 << endl;
    }
  }

  return 0;
}