#include <iostream>
#include <deque>

using namespace std;
using ui = unsigned int;

int main()
{
  ui q;
  cin >> q;

  deque<ui> d;
  ui a, b;
  ui dd;
  bool no = true;
  for (; q--;)
  {
    cin >> a;
    if (a == 1)
    {
      cin >> b;
      d.push_back(b);
    }
    else
    {
      no = false;
      dd = d.front();
      d.pop_front();

      cout << dd << endl;
    }
  }

  if (no)
    cout << endl;

  return 0;
}