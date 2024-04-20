#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  map<ui, bool> t;
  for (ui i = 1; i <= n; i++)
    t[i] = true;

  for (; q--;)
  {
    ui tt;
    cin >> tt;

    if (t.count(tt) > 0)
      t.erase(tt);
    else
      t[tt] = true;
  }

  cout << t.size() << endl;
  return 0;
}