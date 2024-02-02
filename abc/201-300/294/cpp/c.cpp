#include <iostream>
#include <vector>
#include <list>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  list<ui> a(n, 0);
  list<ui> b(m, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }
  for (auto &bb : b)
  {
    cin >> bb;
  }

  string ans_a = "";
  string ans_b = "";
  for (ui i = 1; i <= n + m; i++)
  {
    if (b.size() == 0 || (a.size() > 0 && a.front() < b.front()))
    {
      ans_a += to_string(i) + " ";
      a.pop_front();
    }
    else if (a.size() == 0 || (b.size() > 0 && b.front() < a.front()))
    {
      ans_b += to_string(i) + " ";
      b.pop_front();
    }
    else
    {
      // noop
    }
  }

  // remove trailing space
  ans_a.pop_back();
  ans_b.pop_back();

  cout << ans_a << endl;
  cout << ans_b << endl;

  return 0;
}