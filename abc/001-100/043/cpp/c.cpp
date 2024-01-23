#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ul = unsigned long;

int main()
{
  ui n;
  cin >> n;

  vector<int> a(n);
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ul ans = 0;
  sort(a.begin(), a.end());
  for (int t = a[0]; t <= a[a.size() - 1]; t++)
  {
    ul c = 0;
    for (auto aa : a)
    {
      c += ul(pow(abs(aa - t), 2));
    }

    ans = ans == 0 ? c : min(ans, c);
  }

  cout << ans << endl;
  return 0;
}