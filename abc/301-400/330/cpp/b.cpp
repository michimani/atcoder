#include <iostream>

using namespace std;

int main()
{
  unsigned int n;
  long l, r;
  cin >> n >> l >> r;

  if (l == r)
  {
    for (unsigned int i = 0; i < n; i++)
    {
      if (i > 0)
      {
        cout << " ";
      }

      cout << l;
    }

    cout << endl;
    return 0;
  }

  for (unsigned int i = 0; i < n; i++)
  {
    long a;
    cin >> a;

    long x = l;

    if (a >= r)
    {
      x = r;
    }
    else if (a > l && a < r)
    {
      x = a;
    }

    if (i > 0)
    {
      cout << " ";
    }
    cout << x;
  }

  cout << endl;
  return 0;
}