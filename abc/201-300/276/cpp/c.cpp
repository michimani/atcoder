#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> p(n, 0);
  for (auto &pp : p)
    cin >> pp;

  ui k = 0;
  do
  {
    if (k == 0)
    {
      k++;
      continue;
    }

    for (ui i = 0; i < n; i++)
    {
      if (i > 0)
        cout << " ";
      cout << p[i];
    }
    cout << endl;

    break;
  } while (prev_permutation(p.begin(), p.end()));

  return 0;
}