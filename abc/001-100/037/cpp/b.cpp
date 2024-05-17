#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<ui> a(n, 0);
  for (; q--;)
  {
    ui l, r, t;
    cin >> l >> r >> t;
    for (ui i = l - 1; i < r; i++)
      a[i] = t;
  }

  for (auto &aa : a)
    cout << aa << endl;

  return 0;
}