#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> c;
  for (ui i = 0; i < 4 * n - 1; i++)
  {
    ui a;
    cin >> a;
    c[a]++;
  }

  auto it = c.begin();
  while (it != c.end())
  {
    if (it->second != 4)
    {
      cout << it->first << endl;
      return 0;
    }

    it++;
  }

  return 0;
}