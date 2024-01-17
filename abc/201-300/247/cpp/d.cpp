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
      cy.push_back({x, c});
      break;

    case 2:
      cin >> c;
      while (c > 0)
      {
        if (cy.front().c > c)
        {
          sum += cy.front().x * c;
          cy.front().c -= c;
          c = 0;
        }
        else
        {
          c -= cy.front().c;
          sum += cy.front().x * cy.front().c;
          cy.pop_front();
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