#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  set<ui> g1 = {1, 3, 5, 7, 8, 10, 12};
  set<ui> g2 = {4, 6, 9, 11};
  set<ui> g3 = {2};

  ui x, y;
  cin >> x >> y;

  if ((g1.contains(x) && g1.contains(y)) || (g2.contains(x) && g2.contains(y)) || (g3.contains(x) && g3.contains(y)))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}