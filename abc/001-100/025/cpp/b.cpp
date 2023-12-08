#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  int a, b;
  cin >> n >> a >> b;

  int pos = 0;
  for (unsigned int i = 0; i < n; i++)
  {
    string si;
    int di;
    cin >> si >> di;

    int d = di;
    if (di < a)
    {
      d = a;
    }
    else if (di > b)
    {
      d = b;
    }

    if (si == "West")
    {
      pos -= d;
    }
    else
    {
      pos += d;
    }
  }

  if (pos < 0)
  {
    cout << "West " << abs(pos) << endl;
  }
  else if (pos > 0)
  {
    cout << "East " << abs(pos) << endl;
  }
  else
  {
    cout << pos << endl;
  }

  return 0;
}