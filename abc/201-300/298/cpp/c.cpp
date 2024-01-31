#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  map<ui, map<ui, ui>> boxes;
  map<ui, map<ui, bool>> cards;

  for (ui k = 0; k < q; k++)
  {
    ui c = 0, i = 0, j = 0;
    cin >> c;

    if (c == 1)
    {
      cin >> i >> j;
      boxes[j][i]++;
      cards[i][j] = true;
    }
    else if (c == 2)
    {
      cin >> i;
      auto it = boxes[i].begin();
      bool f_done = false;
      while (it != boxes[i].end())
      {
        for (ui t = 0; t < it->second; t++)
        {
          if (f_done)
          {
            cout << " ";
          }
          else
          {
            f_done = true;
          }
          cout << it->first;
        }
        it++;
      }
      cout << endl;
    }
    else if (c == 3)
    {
      cin >> i;
      auto it = cards[i].begin();
      bool f_done = false;
      while (it != cards[i].end())
      {
        if (f_done)
        {
          cout << " ";
        }
        else
        {
          f_done = true;
        }
        cout << it->first;
        it++;
      }
      cout << endl;
    }
    else
    {
      // noop
    }
  }

  return 0;
}