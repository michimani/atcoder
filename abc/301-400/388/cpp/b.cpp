#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d;
  cin >> n >> d;

  vector<vector<ui>> tld(d, vector<ui>(n, 0));
  ui t, l;
  for (ui i = 0; i < n; i++)
  {
    cin >> t >> l;
    for (ui j = 1; j <= d; j++)
      tld[j - 1][i] = t * (l + j);
  }

  for (auto tl : tld)
  {
    sort(tl.rbegin(), tl.rend());
    cout << tl[0] << endl;
  }

  return 0;
}