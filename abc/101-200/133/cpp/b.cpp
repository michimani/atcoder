#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d;
  cin >> n >> d;

  vector<vector<int>> x(n, vector<int>(d, 0));
  for (auto &xx : x)
    for (auto &dd : xx)
      cin >> dd;

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      ui rd = 0;
      for (ui k = 0; k < d; k++)
        rd += abs(x[i][k] - x[j][k]) * abs(x[i][k] - x[j][k]);

      ans += ui(pow(ui(ceil(sqrt(double(rd)))), 2) == rd);
    }
  }

  cout << ans << endl;

  return 0;
}