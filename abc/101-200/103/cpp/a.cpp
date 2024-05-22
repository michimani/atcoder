#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> a(3, 0);
  for (auto &aa : a)
    cin >> aa;

  sort(a.rbegin(), a.rend());

  cout << a[0] - a[2] << endl;

  return 0;
}