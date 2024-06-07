#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> a = {{1, 0}};
  for (ui i = 0; i < n; i++)
  {
    ui aa;
    cin >> aa;
    a[(i + 1) * 2] = aa;
    a[(i + 1) * 2 + 1] = aa;
  }

  map<ui, ui> m;
  for (auto &aa : a)
  {
    ui d = 0;
    ui p = aa.second;
    if (m.count(p) > 0)
    {
      d = m[p] + 1;
    }
    else
    {
      while (p > 0)
      {
        p = a[p];
        d++;
      }
    }
    cout << d << endl;
    m[aa.first] = d;
  }

  return 0;
}