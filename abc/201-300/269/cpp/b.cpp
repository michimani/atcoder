#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a = 0, b = 0, c = 0, d = 0;

  vector<string> g(10, string(10, '.'));
  for (ui i = 1; i <= 10; i++)
  {
    cin >> g[i - 1];
    if (g[i - 1].find('#') != string::npos)
    {
      if (a == 0)
        a = i;
    }
    else
    {
      if (a != 0 && b == 0)
        b = i - 1;
    }
  }

  for (ui j = 1; j <= 10; j++)
  {
    bool sharp = false;
    for (auto r : g)
    {
      if (r[j - 1] == '#')
      {
        sharp = true;
        break;
      }
    }
    if (sharp)
    {
      if (c == 0)
        c = j;
    }
    else
    {
      if (c != 0 && d == 0)
        d = j - 1;
    }
  }

  if (b == 0)
    b = 10;
  if (d == 0)
    d = 10;

  cout << a << " " << b << endl;
  cout << c << " " << d << endl;

  return 0;
}