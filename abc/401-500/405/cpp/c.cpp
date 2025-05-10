#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<ull> a(n);
  ull sum = 0;
  ull sum_square = 0;

  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
    sum_square += a[i] * a[i];
  }

  ull ans = (sum * sum - sum_square) / 2;
  cout << ans << endl;

  return 0;
}