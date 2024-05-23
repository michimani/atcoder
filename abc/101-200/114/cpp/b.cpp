#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  const int t = 753;
  int ans = t;
  for (ui i = 0; i < s.length() - 2; i++)
  {
    int n = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0');
    ans = min(ans, abs(n - t));
  }

  cout << ans << endl;

  return 0;
}