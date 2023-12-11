#include <iostream>

using namespace std;

int main()
{
  unsigned int n, x;
  cin >> n >> x;

  x *= 100;

  bool down = false;
  unsigned int i = 1;
  unsigned int al = 0;
  while (i <= n)
  {
    unsigned int v, p;
    cin >> v >> p;
    al += v * p;

    if (al > x)
    {
      down = true;
      break;
    }
    i++;
  }

  if (down)
  {
    cout << i << endl;
  }
  else
  {
    cout << -1 << endl;
  }

  return 0;
}