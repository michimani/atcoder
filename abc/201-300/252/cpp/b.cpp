#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, k;
  cin >> n >> k;

  map<ui, map<ui, bool>> a;
  for (ui i = 1; i <= n; i++)
  {
    ui aa;
    cin >> aa;
    a[aa][i] = true;
  }

  for (ui i = 0; i < k; i++)
  {
    ui b;
    cin >> b;

    if (a.rbegin()->second.count(b) > 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}