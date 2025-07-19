#include <iostream>
#include <set>

using namespace std;
using ui = unsigned int;
int main()
{
  ui n;
  cin >> n;

  set<ui> a;

  for (; n--;)
  {
    ui aa;
    cin >> aa;
    a.insert(aa);
  }

  ui x;
  cin >> x;

  cout << (a.contains(x) ? "Yes" : "No") << endl;

  return 0;
}