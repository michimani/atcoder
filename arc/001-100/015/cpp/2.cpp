#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  vector<ui> c(6, 0);
  for (ui i = 0; i < n; i++)
  {
    float mx, mn;
    cin >> mx >> mn;

    if (mx >= 35)
    {
      c[0]++;
    }

    if (mx >= 30 && mx < 35)
    {
      c[1]++;
    }

    if (mx >= 25 && mx < 30)
    {
      c[2]++;
    }

    if (mn >= 25)
    {
      c[3]++;
    }

    if (mn < 0 && mx >= 0)
    {
      c[4]++;
    }

    if (mx < 0)
    {
      c[5]++;
    }
  }

  for (ui i = 0; i < 6; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << c[i];
  }
  cout << endl;

  return 0;
}