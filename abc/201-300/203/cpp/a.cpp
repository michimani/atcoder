#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, ui> d;
  for (ui i = 0; i < 3; i++)
  {
    ui dd;
    cin >> dd;

    if (d.count(dd) == 0)
    {
      d[dd] = 1;
    }
    else
    {
      d[dd]++;
    }
  }

  if (d.size() == 3)
  {
    cout << 0 << endl;
  }
  else
  {
    auto it = d.begin();
    while (it != d.end())
    {
      if (it->second == 1 || it->second == 3)
      {
        cout << it->first << endl;
        break;
      }
      it++;
    }
  }

  return 0;
}