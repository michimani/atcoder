#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, w;
  cin >> n >> w;

  vector<ui> a(n, 0);
  for (auto &aa : a)
  {
    cin >> aa;
  }

  map<ui, bool> nm;
  for (ui i = 0; i < n; i++)
  {
    if (a[i] <= w)
      nm[a[i]] = true;

    for (ui j = i + 1; j < n; j++)
    {
      if (a[i] + a[j] <= w)
        nm[a[i] + a[j]] = true;

      for (ui k = j + 1; k < n; k++)
      {
        if (a[i] + a[j] + a[k] <= w)
          nm[a[i] + a[j] + a[k]] = true;
      }
    }
  }

  cout << nm.size() << endl;
  return 0;
}