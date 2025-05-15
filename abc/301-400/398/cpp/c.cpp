#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> ex;
  map<ui, ui> t;

  ui a;
  for (ui i = 1; i <= n; i++)
  {
    cin >> a;
    if (ex[a])
      continue;

    if (t.count(a) > 0)
    {
      t.erase(a);
      ex[a] = true;
    }
    else
    {
      t[a] = i;
    }
  }

  if (t.size() == 0)
    cout << "-1" << endl;
  else
    cout << t.rbegin()->second << endl;

  return 0;
}