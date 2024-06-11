#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> a;
  for (ui i = 1; i <= m; i++)
  {
    ui aa;
    cin >> aa;
    a[i] = aa;
  }

  for (; n--;)
  {
    for (ui i = 1; i <= m; i++)
    {
      ui x;
      cin >> x;
      if (a.count(i) == 0)
        continue;

      if (a[i] >= x)
        a[i] -= x;
      else
        a[i] = 0;

      if (a[i] == 0)
        a.erase(i);
    }
  }

  cout << (a.size() == 0 ? "Yes" : "No") << endl;

  return 0;
}