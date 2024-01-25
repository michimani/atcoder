#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui a, b, c;
  cin >> a >> b >> c;

  map<ui, ui> rm;
  vector<ui> rv;

  ui x = 1;
  ui pr = 0;
  bool exists = false;
  while (true)
  {
    ui r = (a * x - c) % b;
    if (r == 0)
    {
      cout << "YES" << endl;
      return 0;
    }

    if (rm.count(r) > 0)
    {
      if (exists && rv[rm[r] - 1] == pr)
      {
        cout << "NO" << endl;
        return 0;
      }
      exists = true;
    }
    else
    {
      exists = false;
    }

    rv.push_back(r);
    rm[r] = rv.size() - 1;
    pr = r;
    x++;
  }

  return 0;
}