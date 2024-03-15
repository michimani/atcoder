#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n, 0);
  vector<ui> sa(n, 0);
  for (ui i = 0; i < n; i++)
  {
    cin >> a[i];
    sa[i] = a[i];
  }

  sort(sa.rbegin(), sa.rend());

  for (ui i = 0; i < n; i++)
  {
    if (a[i] == sa[0])
      cout << sa[1] << endl;
    else
      cout << sa[0] << endl;
  }

  return 0;
}