#include <iostream>

using namespace std;

int main()
{
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  if (a * 500 + b * 100 + c * 50 < x)
  {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;

  for (int ai = 0; ai <= a; ai++)
  {
    for (int bi = 0; bi <= b; bi++)
    {
      for (int ci = 0; ci <= c; ci++)
      {
        if (ai * 500 + bi * 100 + ci * 50 == x)
        {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
}