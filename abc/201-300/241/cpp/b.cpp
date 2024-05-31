#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  map<ui, ui> am;
  for (ui i = 0; i < n; i++)
  {
    ui a;
    cin >> a;
    am[a]++;
  }

  for (ui i = 0; i < m; i++)
  {
    ui b;
    cin >> b;

    if (am[b] == 0)
    {
      cout << "No" << endl;
      return 0;
    }

    am[b]--;
  }

  cout << "Yes" << endl;

  return 0;
}