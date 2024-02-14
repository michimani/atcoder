#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> a(3, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  sort(a.begin(), a.end());

  cout << (a[2] - a[1] == a[1] - a[0] ? "Yes" : "No") << endl;
  return 0;
}