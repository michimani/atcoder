#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<ui> abc(3, 0);
  for (auto &v : abc)
    cin >> v;

  ui ans = 0;
  for (ui i = 0; i < 3; i++)
  {
    for (ui j = 0; j < 3; j++)
    {
      if (i == j)
        continue;

      ans = max(ans, abc[i] + abc[j]);
    }
  }

  cout << ans << endl;
}