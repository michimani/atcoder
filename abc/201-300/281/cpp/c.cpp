#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  ull t;
  cin >> n >> t;

  ull all = 0;
  vector<ull> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
    all += aa;
  }

  ull r = t % all;
  for (ui i = 0; i < n; i++)
  {
    if (r < a[i])
    {
      cout << (i + 1) << " " << r << endl;
      return 0;
    }
    r -= a[i];
  }

  return 0;
}