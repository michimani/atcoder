#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  string n;
  cin >> n;

  sort(n.begin(), n.end());

  ui l = ui(n.length());
  ull ans = 0;

  do
  {
    if (n[0] == '0')
      continue;

    for (ui i = 1; i < l; i++)
    {
      ull a = 0, b = 0;
      for (ui j = 0; j < l; j++)
      {
        if (j < i || (n[j] == '0' && b == 0))
          a = a * 10 + ull(n[j] - '0');
        else
          b = b * 10 + ull(n[j] - '0');
      }

      ans = max(ans, a * b);
    }

  } while (next_permutation(n.begin(), n.end()));

  cout << ans << endl;

  return 0;
}