#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n);
  for (auto &aa : a)
    cin >> aa;

  sort(a.begin(), a.end(), greater<ui>());

  ui maxX = 0;
  for (ui i = 0; i < n; i++)
  {
    ui x = min(a[i], i + 1);
    maxX = max(maxX, x);
  }

  cout << maxX << endl;

  return 0;
}