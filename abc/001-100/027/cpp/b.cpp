#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui t = 0;
  vector<ui> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
    t += aa;
  }

  if (t % n != 0)
  {
    cout << -1 << endl;
    return 0;
  }

  ui p = t / n;
  ui ans = 0;
  ui tmp = 0;
  ui i = 0;
  for (auto &aa : a)
  {
    tmp += aa;
    i++;
    if (tmp % i == 0 && tmp / i == p)
    {
      ans += i - 1;
      i = 0;
      tmp = 0;
    }
  }

  cout << ans << endl;

  return 0;
}