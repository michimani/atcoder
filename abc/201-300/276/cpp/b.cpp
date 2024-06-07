#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<map<ui, bool>> c(n);
  for (ui i = 0; i < m; i++)
  {
    ui a, b;
    cin >> a >> b;

    c[a - 1][b] = true;
    c[b - 1][a] = true;
  }

  for (auto &cc : c)
  {
    cout << cc.size();
    for (auto &d : cc)
      cout << " " << d.first;
    cout << endl;
  }

  return 0;
}