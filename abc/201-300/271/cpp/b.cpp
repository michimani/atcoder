#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<vector<ui>> l(n);
  for (auto &ll : l)
  {
    ui li;
    cin >> li;
    vector<ui> a(li, 0);
    for (auto &aa : a)
    {
      cin >> aa;
    }

    ll = a;
  }

  for (ui i = 0; i < q; i++)
  {
    ui s, t;
    cin >> s >> t;

    cout << l[s - 1][t - 1] << endl;
  }

  return 0;
}