#include <iostream>
#include <cmath>

using namespace std;

int d100(int n)
{
  return n / 100;
}

int d10(int n)
{
  return n / 10 - (n / 100) * 10;
}

int d1(int n)
{
  return n - (n / 100) * 100 - (n / 10) * 10;
}

int main()
{
  int a, b;
  cin >> a >> b;

  if (d100(a) == 9)
  {
    // 9__, ___
    if (d100(b) == 1)
    {
      // 9__, 1__
      if (d10(a) == 9)
      {
        // 99_, 1__
        if (d10(b) == 0)
        {
          // 99_, 10_
          cout << max(
                      999 - b,
                      a - 100)
               << endl;
        }
        else
        {
          // 99_, 1__
          cout << max(
                      999 - b,
                      a - (b - d10(b) * 10))
               << endl;
        }
      }
      else
      {
        // 9__, 1__
        cout << max(
                    (a + ((9 - d10(a)) * 10)) - b,
                    a - (b - d10(b) * 10))
             << endl;
      }

      return 0;
    }

    cout << max(
                (a + ((9 - d10(a)) * 100)) - b,
                a - (b - (d100(b) - 1) * 100))
         << endl;
    return 0;
  }

  cout << max(
              (a + ((9 - d100(a)) * 100)) - b,
              a - (b - (d100(b) - 1) * 100))
       << endl;

  return 0;
}