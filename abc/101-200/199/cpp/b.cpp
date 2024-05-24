#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n, 0);
  vector<ui> b(n, 0);
  for (auto &aa : a)
    cin >> aa;
  for (auto &bb : b)
    cin >> bb;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ui ans = 0;
  for (ui i = a[n - 1]; i <= b[0]; i++)
    ans++;

  cout << ans << endl;

  return 0;
}