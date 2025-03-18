#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<ui, bool> r = {
      {0, true},
      {1, true},
      {2, true},
      {3, true},
      {4, true},
      {5, true},
      {6, true},
      {7, true},
  };
  map<ui, bool> c = {
      {0, true},
      {1, true},
      {2, true},
      {3, true},
      {4, true},
      {5, true},
      {6, true},
      {7, true},
  };

  char s;
  for (ui i = 0; i < 8; i++)
  {
    bool re = false;
    for (ui j = 0; j < 8; j++)
    {
      cin >> s;
      if (s == '#')
      {
        re = true;
        c.erase(j);
      }
    }

    if (re)
      r.erase(i);
  }

  cout << r.size() * c.size() << endl;

  return 0;
}