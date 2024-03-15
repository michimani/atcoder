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
  ull sa = 0;
  for (auto &aa : a)
  {
    cin >> aa;
    sa += aa;
  }

  ull x;
  cin >> x;

  ull c = x / sa;
  ull ans = c * n;
  ull b = c * sa;
  while (b <= x)
  {
    b += a[ui(ans % n)];
    ans++;
  }

  cout << ans << endl;
  return 0;
}