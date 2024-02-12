#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> a(n);
  for (auto &aa : a)
    cin >> aa;

  ui q;
  cin >> q;

  ui cmd, k, x;
  for (; q--;)
  {
    cin >> cmd >> k;
    if (cmd == 1)
    {
      cin >> x;
      a[k - 1] = x;
    }
    else if (cmd == 2)
    {
      cout << a[k - 1] << endl;
    }
    else
    {
      // noop
    }
  }

  return 0;
}