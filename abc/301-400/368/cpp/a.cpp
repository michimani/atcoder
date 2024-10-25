#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  string ans = "";
  for (ui i = n - k; i < n; i++)
    ans += to_string(a[i]) + " ";

  for (ui i = 0; i < n - k; i++)
    ans += to_string(a[i]) + " ";

  ans.pop_back();

  cout << ans << endl;

  return 0;
}