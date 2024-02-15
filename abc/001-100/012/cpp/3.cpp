#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> d(9, 0);
  for (ui i = 1; i < 10; i++)
    d[i - 1] = i;

  ui sum = 0;
  for (auto d1 : d)
    for (auto d2 : d)
      sum += d1 * d2;

  ui n;
  cin >> n;

  ui diff = sum - n;
  for (auto d1 : d)
    for (auto d2 : d)
      if (d1 * d2 == diff)
        cout << d1 << " x " << d2 << endl;

  return 0;
}