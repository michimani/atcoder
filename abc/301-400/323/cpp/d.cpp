#include <iostream>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  map<long, long> slimes;
  for (int i = 0; i < N; i++)
  {
    long s, c;
    cin >> s >> c;
    slimes[s] = c;
  }

  int ans = 0;
  auto iter = slimes.begin();
  while (iter != slimes.end())
  {
    long org_c = iter->second;
    ans += (org_c % 2);
    if (org_c > 0 && org_c / 2 > 0)
    {
      slimes[iter->first] = org_c % 2;
      long new_slime_s = iter->first * 2;
      long new_slime_c = org_c / 2;
      if (slimes.count(new_slime_s) == 0)
      {
        slimes[new_slime_s] = new_slime_c;
      }
      else
      {
        slimes[new_slime_s] += new_slime_c;
      }
    }
    ++iter;
  }

  cout << ans << endl;
}