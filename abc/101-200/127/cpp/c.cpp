#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int ll = 1, rr = n;
  for (; m--;)
  {
    int l, r;
    cin >> l >> r;
    ll = max(ll, l);
    rr = min(rr, r);
  }

  if (rr < ll)
  {
    cout << 0 << endl;
    return 0;
  }

  cout << rr - ll + 1 << endl;
  return 0;
}