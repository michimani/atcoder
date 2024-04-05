#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b;
  cin >> a >> b;

  map<ui, bool> x = {{1, true}, {2, true}, {3, true}};
  x.erase(a);
  x.erase(b);

  cout << x.begin()->first << endl;
  return 0;
}