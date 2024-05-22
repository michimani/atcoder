#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<string, int> s, t;

  ui n;
  cin >> n;
  for (; n--;)
  {
    string ss;
    cin >> ss;
    s[ss]++;
  }

  ui m;
  cin >> m;
  for (; m--;)
  {
    string tt;
    cin >> tt;
    t[tt]++;
  }

  int ans = 0;
  for (auto is : s)
    ans = max(ans, is.second - t[is.first]);

  cout << ans << endl;

  return 0;
}