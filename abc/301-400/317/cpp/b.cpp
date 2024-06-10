#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n, 0);
  for (auto &aa : a)
    cin >> aa;

  sort(a.begin(), a.end());

  for (ui i = 1; i < n; i++)
  {
    if (a[i] - a[i - 1] > 1)
    {
      cout << a[i - 1] + 1 << endl;
      return 0;
    }
  }

  cout << a[n - 1] + 1 << endl;

  return 0;
}