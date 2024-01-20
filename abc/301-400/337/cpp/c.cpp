#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  if (n == 1)
  {
    cout << 1 << endl;
    return 0;
  }

  map<ui, ui> bm;
  ui f = 0;
  for (ui i = 1; i <= n; i++)
  {
    int a;
    cin >> a;

    if (a == -1)
    {
      f = i;
    }
    else
    {
      bm[ui(a)] = i;
    }
  }

  cout << f;
  ui s = bm[f];
  while (bm.count(s) != 0)
  {
    cout << " " << s;
    s = bm[s];
  }

  cout << " " << s << endl;

  return 0;
}