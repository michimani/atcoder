#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  unsigned int c = 1;
  unsigned int ans = 0;

  while (n - c >= 1)
  {
    unsigned int ab = n - c;
    for (unsigned int a = 1; a <= sqrt(ab); a++)
    {
      if (ab % a != 0)
      {
        continue;
      }

      if (a == ab / a)
      {
        ans++;
      }
      else
      {
        ans += 2;
      }
    }

    c++;
  }

  cout << ans << endl;
}
