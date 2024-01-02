#include <iostream>

using namespace std;

int main()
{
  int a, b, w;
  cin >> a >> b >> w;

  w *= 1000;
  int base = 0;
  bool ok = false;
  int max_c = 0;
  while (w - a * base >= a && !ok)
  {
    int ww = w - a * base;
    int cnt = ww / a;
    int dr = ww % a;
    if (dr == 0)
    {
      max_c = cnt;
      ok = true;
      break;
    }
    for (int i = 2; (dr + a * base) / i >= a; i++)
    {
      if ((dr + a * base) / i <= b)
      {
        ok = true;
        max_c = cnt + i;
        break;
      }
    }

    base++;
  }

  if (!ok)
  {
    cout << "UNSATISFIABLE" << endl;
    return 0;
  }

  base = 0;
  int min_c = 0;
  ok = false;
  while (w - b * base >= a && !ok)
  {
    int ww = w - b * base;
    int cnt = ww / b;
    int dr = ww % b;
    if (dr == 0)
    {
      min_c = cnt;
      ok = true;
      break;
    }
    for (int i = 2; (dr + b * base) / i >= a; i++)
    {
      if ((dr + b * base) / i <= b)
      {
        ok = true;
        min_c = cnt + i;
        break;
      }
    }

    base++;
  }

  cout << min_c << " " << max_c << endl;
  return 0;
}