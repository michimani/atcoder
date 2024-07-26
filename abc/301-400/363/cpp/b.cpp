#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, t, p;
  cin >> n >> t >> p;

  vector<ui> ll;
  for (ui i = 0; i < n; i++)
  {
    ui l;
    cin >> l;

    if (l >= t)
      p -= 1;
    else
      ll.push_back(l);

    if (p == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  sort(ll.rbegin(), ll.rend());

  cout << t - ll[p - 1] << endl;

  return 0;
}