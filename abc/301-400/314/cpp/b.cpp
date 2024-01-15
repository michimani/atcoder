#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, map<ui, vector<ui>>> accm;
  for (ui i = 0; i < n; i++)
  {
    ui c;
    cin >> c;
    for (ui j = 0; j < c; j++)
    {
      ui a;
      cin >> a;
      accm[a][c].push_back(i + 1);
    }
  }

  ui x;
  cin >> x;

  if (accm.count(x) == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  cout << accm[x].begin()->second.size() << endl;
  for (ui h = 0; h < accm[x].begin()->second.size(); h++)
  {
    if (h != 0)
    {
      cout << " ";
    }
    cout << accm[x].begin()->second[h];
  }
  cout << endl;

  return 0;
}