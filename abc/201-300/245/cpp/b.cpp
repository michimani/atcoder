#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, bool> a;
  for (ui i = 0; i < n; i++)
  {
    ui aa;
    cin >> aa;
    a[aa] = true;
  }

  for (ui i = 0; i <= 2000; i++)
  {
    if (a.count(i) == 0)
    {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}