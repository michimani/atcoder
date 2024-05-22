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

  cout << a[n - 1] - a[0] << endl;

  return 0;
}