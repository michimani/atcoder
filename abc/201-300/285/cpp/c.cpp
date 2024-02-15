#include <iostream>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  string s;
  cin >> s;

  ull ans = 0;
  for (ui i = 1; i <= s.size(); i++)
    ans += ull(s[s.size() - i] - ('A' - 1)) * ull(pow(26, i - 1));

  cout << ans << endl;
  return 0;
}