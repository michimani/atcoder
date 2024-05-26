#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, map<ui, bool>> t;
  for (ui i = 0; i < n - 1; i++)
  {
    ui a, b;
    cin >> a >> b;
    t[a][b] = true;
    t[b][a] = true;
  }

  for (auto &it : t)
  {
    if (it.second.size() == n - 1)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}