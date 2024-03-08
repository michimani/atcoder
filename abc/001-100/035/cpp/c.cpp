#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<ui> o(n + 1, 0);
  ui l, r;
  for (; q--;)
  {
    cin >> l >> r;
    o[l - 1]++;
    o[r]++;
  }

  o.pop_back();

  ui p = 0;
  for (auto oo : o)
  {
    p = (oo + p) % 2;
    cout << p;
  }
  cout << endl;

  return 0;
}