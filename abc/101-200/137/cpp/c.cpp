#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

unsigned long long nc2(unsigned long long n)
{
  return (n * (n - 1)) / 2;
}

int main()
{
  unsigned int n;
  cin >> n;

  map<string, unsigned long long> s_cnt;
  for (unsigned int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    s_cnt[s]++;
  }

  unsigned long long ans = 0;

  auto iter = s_cnt.begin();
  while (iter != s_cnt.end())
  {
    ans += nc2(iter->second);
    iter++;
  }

  cout << ans << endl;
  return 0;
}