#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> p(n, 0);
  for (auto &pp : p)
    cin >> pp;

  ui q;
  cin >> q;
  for (; q--;)
  {
    ui a, b;
    cin >> a >> b;

    for (auto pp : p)
    {
      if (pp == a || pp == b)
      {
        cout << pp << endl;
        break;
      }
    }
  }

  return 0;
}