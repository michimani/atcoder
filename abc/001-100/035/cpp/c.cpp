#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<bool> o(n, false);
  ui l, r;
  for (; q--;)
  {
    cin >> l >> r;
    for (ui i = l - 1; i < r; i++)
      o[i] = !o[i];
  }

  for (auto oo : o)
    cout << ui(oo);
  cout << endl;

  return 0;
}