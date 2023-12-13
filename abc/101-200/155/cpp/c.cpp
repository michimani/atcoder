#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  map<string, unsigned int> s_cnt;
  for (unsigned int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    s_cnt[s]++;
  }

  vector<vector<string>> cnt_ss(n + 1);
  unsigned int mx = 0;
  auto iter = s_cnt.begin();
  while (iter != s_cnt.end())
  {
    cnt_ss[iter->second].push_back(iter->first);
    mx = max(mx, iter->second);
    iter++;
  }

  vector<string> out = cnt_ss[mx];
  sort(out.begin(), out.end());

  for (auto &o : out)
  {
    cout << o << endl;
  }

  return 0;
}