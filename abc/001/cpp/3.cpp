#include <iostream>
#include <cmath>

using namespace std;

string dir(int deg)
{
  deg *= 10;

  if (deg < 1125)
  {
    return "N";
  }

  if (deg < 3375)
  {
    return "NNE";
  }

  if (deg < 5625)
  {
    return "NE";
  }

  if (deg < 7875)
  {
    return "ENE";
  }

  if (deg < 10125)
  {
    return "E";
  }

  if (deg < 12375)
  {
    return "ESE";
  }

  if (deg < 14625)
  {
    return "SE";
  }

  if (deg < 16875)
  {
    return "SSE";
  }

  if (deg < 19125)
  {
    return "S";
  }

  if (deg < 21375)
  {
    return "SSW";
  }

  if (deg < 23625)
  {
    return "SW";
  }

  if (deg < 25875)
  {
    return "WSW";
  }

  if (deg < 28125)
  {
    return "W";
  }

  if (deg < 30375)
  {
    return "WNW";
  }

  if (deg < 32625)
  {
    return "NW";
  }

  if (deg < 34875)
  {
    return "NNW";
  }

  return "N";
}

int w(int dis)
{
  int ws = int(round(((double)(dis)*10) / 60.0));

  if (ws <= 2)
  {
    return 0;
  }

  if (ws <= 15)
  {
    return 1;
  }

  if (ws <= 33)
  {
    return 2;
  }

  if (ws <= 54)
  {
    return 3;
  }

  if (ws <= 79)
  {
    return 4;
  }

  if (ws <= 107)
  {
    return 5;
  }

  if (ws <= 138)
  {
    return 6;
  }

  if (ws <= 171)
  {
    return 7;
  }

  if (ws <= 207)
  {
    return 8;
  }

  if (ws <= 244)
  {
    return 9;
  }

  if (ws <= 284)
  {
    return 10;
  }

  if (ws <= 326)
  {
    return 11;
  }

  return 12;
}

int main()
{
  int deg = 0, dis = 0;

  cin >> deg >> dis;

  int wp = w(dis);
  if (wp == 0)
  {
    cout << "C " << wp << endl;
    return 0;
  }

  cout << dir(deg) << " " << wp << endl;
}