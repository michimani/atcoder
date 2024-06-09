#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

string key(ui a, ui b)
{
  if (a > b)
    swap(a, b);

  return to_string(a) + "-" + to_string(b);
}

int main()
{
  ui n, m;
  cin >> n >> m;

  map<string, bool> p;
  for (ui i = 0; i < m; i++)
  {
    ui b = 0;
    for (ui j = 0; j < n; j++)
    {
      ui a;
      cin >> a;
      if (j > 0)
        p[key(a, b)] = true;

      b = a;
    }
  }

  cout << (n * (n - 1)) / 2 - ui(p.size()) << endl;

  return 0;
}