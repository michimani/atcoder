#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> a;
  for (ui i = 0; i < n; i++)
  {
    ui av;
    cin >> av;
    a[av] = i;
  }

  ui x = 0, y = 0;
  for (ui i = 0; i < n; i++)
  {
    ui b;
    cin >> b;

    if (a.count(b) == 0)
      continue;

    if (a[b] == i)
      x++;
    else
      y++;
  }

  cout << x << endl;
  cout << y << endl;

  return 0;
}