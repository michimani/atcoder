#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  vector<pair<double, double>> xy(3);
  for (auto &z : xy)
    cin >> z.first >> z.second;

  for (ui i = 0; i < 3; i++)
  {
    pair<double, double> a = {xy[i].first - xy[(i + 1) % 3].first, xy[i].second - xy[(i + 1) % 3].second};
    pair<double, double> b = {xy[(i + 2) % 3].first - xy[(i + 1) % 3].first, xy[(i + 2) % 3].second - xy[(i + 1) % 3].second};

    if ((a.first * b.first + a.second * b.second) / (sqrt(a.first * a.first + a.second * a.second) * sqrt(b.first * b.first + b.second * b.second)) == 0)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}