#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  unsigned ans = 0;
  unsigned p_max = 0;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int p;
    cin >> p;
    p_max = max(p_max, p);
    ans += p;
  }

  ans -= (p_max / 2);

  cout << ans << endl;

  return 0;
}