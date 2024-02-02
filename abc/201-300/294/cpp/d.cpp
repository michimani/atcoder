#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

struct User
{
  ui x;
  User *prev;
  User *next;
};

int main()
{
  ui n, q;
  cin >> n >> q;

  map<ui, User *> um;
  User u = {0, NULL, NULL};
  ui for_call = 1;
  for (ui i = 0; i < q; i++)
  {
    ui c;
    cin >> c;

    if (c == 1)
    {
      User nu = {for_call, &u, NULL};
      nu.next = &nu;
      um[for_call] = &nu;
      for_call++;
    }
    else if (c == 2)
    {
      ui x;
      cin >> x;
      um[x]->prev->next = um[x]->next;
      um[x]->next->prev = um[x]->prev;
      um.erase(x);
    }
    else if (c == 3)
    {
      cout << um.begin()->first << endl;
    }
    else
    {
      // noop
    }
  }

  return 0;
}