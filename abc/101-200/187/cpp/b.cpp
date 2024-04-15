#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<pair<double, double>> xy(n);
  for (auto &z : xy)
    cin >> z.first >> z.second;

  ui ans = 0;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = i + 1; j < n; j++)
    {
      double a = (xy[j].second - xy[i].second) / (xy[j].first - xy[i].first);
      ans += ui(-1 <= a && a <= 1);
    }
  }

  cout << ans << endl;
  return 0;
}