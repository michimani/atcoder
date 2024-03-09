#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

struct Node
{
  ui x;
  Node *prev;
  Node *next;
};

int main()
{
  map<ui, Node *> an;

  ui n;
  cin >> n;

  ui a = 0;
  Node *root = NULL;
  Node *pn = NULL;
  for (ui i = 0; i < n; i++)
  {
    cin >> a;

    Node *node = new Node({a, pn, NULL});
    if (i == 0)
      root = node;

    if (i > 0)
      pn->next = node;

    pn = node;
    an[a] = node;
  }

  ui q;
  cin >> q;

  ui c, x, y;
  for (; q--;)
  {
    cin >> c;
    if (c == 1)
    {
      cin >> x >> y;
      Node *xn = an[x];
      Node *nn = new Node({y, xn, xn->next});
      if (xn->next != NULL)
        xn->next->prev = nn;

      xn->next = nn;
      an[y] = nn;
    }
    else if (c == 2)
    {
      cin >> x;
      Node *xn = an[x];

      if (xn->prev != NULL)
        xn->prev->next = xn->next;

      if (xn->next != NULL)
        xn->next->prev = xn->prev;

      if (xn->prev == NULL)
        root = xn->next;

      an.erase(xn->x);
      delete xn;
    }
    else
    {
      // noop
    }
  }

  cout << root->x;
  Node *nx = root->next;
  while (nx != NULL)
  {
    cout << " " << nx->x;
    nx = nx->next;
  }
  cout << endl;

  return 0;
}