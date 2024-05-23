#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui x;
  cin >> x;

  set<ui> f = {3, 5, 7};

  cout << (f.contains(x) ? "YES" : "NO") << endl;

  return 0;
}