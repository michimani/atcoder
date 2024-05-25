#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x, y;
  cin >> x >> y;

  if (x == y)
  {
    cout << x << endl;
    return 0;
  }

  map<ui, bool> j = {{0, true}, {1, true}, {2, true}};
  j.erase(x);
  j.erase(y);

  cout << j.begin()->first << endl;

  return 0;
}