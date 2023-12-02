#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool comp(const tuple<unsigned long, unsigned int> &l, const tuple<unsigned long, unsigned int> &r)
{
  return get<0>(l) > get<0>(r);
}

int main()
{
  unsigned int n;
  cin >> n;

  vector<tuple<unsigned long, unsigned int>> a_idx; // (a, idx)
  for (unsigned int i = 0; i < n; i++)
  {
    unsigned long a;
    cin >> a;

    a_idx.push_back({a, i});
  }

  sort(a_idx.begin(), a_idx.end(), comp);

  vector<unsigned long> ans(n, 0);

  unsigned long prev = 0;
  unsigned long ans_tmp = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    ans_tmp += prev;

    if (i > 0 && get<0>(a_idx[i]) == prev)
    {
      ans[get<1>(a_idx[i])] = ans[get<1>(a_idx[i - 1])];
      continue;
    }

    ans[get<1>(a_idx[i])] = ans_tmp;
    prev = get<0>(a_idx[i]);
  }

  for (unsigned int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }

  cout << endl;

  return 0;
}