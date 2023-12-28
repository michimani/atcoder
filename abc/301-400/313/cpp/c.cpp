#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ui = unsigned int;
using ll = long long;

int main()
{
  ui n;
  cin >> n;

  if (n == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  vector<ll> a(n, 0);
  ll sum = 0;
  for (auto &aa : a)
  {
    cin >> aa;
    sum += aa;
  }

  vector<ll> b(n, sum / n);
  for (ui i = 0; i < sum % n; i++)
  {
    b[n - 1 - i]++;
  }

  sort(a.begin(), a.end());
  ll cnt = 0;
  for (ui i = 0; i < n; i++)
  {
    cnt += abs(a[i] - b[i]);
  }

  cout << cnt / 2 << endl;
  return 0;
}
