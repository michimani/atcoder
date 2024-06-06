#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  for (ui i = 0; i < n; i++)
  {
    if (i > 0)
      cout << " ";
    if (p <= i + 1 && i + 1 <= q)
      cout << a[i + (r - p)];
    else if (r <= i + 1 && i + 1 <= s)
      cout << a[i - (r - p)];
    else
      cout << a[i];
  }

  cout << endl;

  return 0;
}