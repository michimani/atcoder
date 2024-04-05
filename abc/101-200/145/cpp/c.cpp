#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct Town
{
  ui id;
  double x, y;
};

map<ui, map<ui, double>> d;

double dist(Town &a, Town &b)
{
  if (d.count(a.id) && d[a.id].count(b.id))
    return d[a.id][b.id];

  double dx = a.x - b.x;
  double dy = a.y - b.y;
  double dis = sqrt(dx * dx + dy * dy);
  d[a.id][b.id] = dis;
  d[b.id][a.id] = dis;
  return dis;
}

int main()
{
  ui n;
  cin >> n;
  vector<Town> towns(n);
  vector<ui> ids(n);
  double div = 1;
  for (ui i = 0; i < n; i++)
  {
    ids[i] = i;
    towns[i].id = i;
    cin >> towns[i].x >> towns[i].y;
    div *= double(i + 1);
  }

  double total = 0;
  do
  {
    for (ui i = 1; i < n; i++)
    {
      total += dist(towns[ids[i - 1]], towns[ids[i]]);
    }
  } while (next_permutation(ids.begin(), ids.end()));

  cout << fixed << setprecision(7) << total / div << endl;
  return 0;
}