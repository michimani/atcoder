#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ui = unsigned int;

struct Dot
{
  ui id;
  double x, y;
};

double dist(Dot &a, Dot &b)
{
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  return sqrt(dx * dx + dy * dy);
}

int main()
{
  ui n;
  cin >> n;

  vector<Dot> dots(n);
  for (ui i = 0; i < n; i++)
  {
    dots[i].id = i + 1;
    cin >> dots[i].x >> dots[i].y;
  }

  for (auto di : dots)
  {
    double dmx = 0;
    ui did = 0;
    for (auto dj : dots)
    {
      if (di.id == dj.id)
        continue;

      double dt = dist(di, dj);
      if (dmx < dt)
      {
        dmx = dt;
        did = dj.id;
      }
    }

    cout << did << endl;
  }

  return 0;
}