#include <iostream>
#include <list>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

struct Ball
{
  ull x;
  ull c;
};

int main()
{
  ui q;
  cin >> q;

  list<Ball> cy;
  for (ui i = 0; i < q; i++)
  {
    ui cmd;
    cin >> cmd;

    ull x = 0, c = 0, sum = 0;
    switch (cmd)
    {
    case 1:
      cin >> x >> c;
      Ball b;
      b.x = x;
      b.c = c;
      cy.push_back(b);
      break;

    case 2:
      cin >> c;
      while (c > 0)
      {
        Ball fb = cy.front();
        cy.pop_front();
        if (fb.c > c)
        {
          sum += fb.x * c;
          fb.c -= c;
          cy.push_front(fb);
          c = 0;
        }
        else
        {
          c -= fb.c;
          sum += fb.x * fb.c;
        }
      }

      cout << sum << endl;

      break;

    default:
      // noop
      break;
    }
  }

  return 0;
}