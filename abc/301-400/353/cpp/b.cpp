#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  ui o = k;
  ui ans = 1;
  for (; n--;)
  {
    ui a;
    cin >> a;

    if (a > k)
    {
      ans++;
      k = o;
    }

    k -= a;
  }

  cout << ans << endl;

  return 0;
}