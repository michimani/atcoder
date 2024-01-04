#include <iostream>
#include <map>
#include <stack>

using namespace std;
using ui = unsigned int;

int main()
{

  ui n, m;
  cin >> n >> m;
  map<ui, bool> re;
  for (ui i = 0; i < m; i++)
  {
    ui r;
    cin >> r;
    re[r] = true;
  }

  stack<ui> t;
  ui out = 0;
  while (true)
  {
    if (t.empty())
    {
      if (out == n)
      {
        break;
      }

      t.push(out + 1);
    }

    ui num = t.top();
    if (re[num])
    {
      re[num] = false;
      t.push(num + 1);
      continue;
    }

    if (out > 0)
    {
      cout << " ";
    }
    cout << num;
    out++;

    t.pop();
  }

  cout << endl;
  return 0;
}