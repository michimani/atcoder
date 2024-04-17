#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  string n;
  cin >> n;

  map<ui, bool> dm;
  vector<ui> dv;
  ui total = 0;
  for (auto c : n)
  {
    ui d = ui(c - '0');
    total += d;
    dm[d] = true;
    dv.push_back(d);
  }

  ui dn = ui(n.length());
  for (ui i = 0; i <= dn - 1; i++)
  {
    vector<bool> combination(dn, false);
    for (ui j = 0; j < i; j++)
      combination[j] = true;

    do
    {
      ui tt = total;
      vector<ui> selected;
      for (ui k = 0; k < dn; k++)
        if (combination[k])
          tt -= dv[k];

      if (tt % 3 == 0)
      {
        cout << i << endl;
        return 0;
      }

    } while (prev_permutation(combination.begin(), combination.end()));
  }

  cout << "-1" << endl;
  return 0;
}