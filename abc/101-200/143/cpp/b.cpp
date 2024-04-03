#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> d(n, 0);
  for (auto &dd : d)
    cin >> dd;

  ull ans = 0;
  for (ui i = 0; i < n; i++)
    for (ui j = i + 1; j < n; j++)
      ans += d[i] * d[j];

  cout << ans << endl;
  return 0;
}