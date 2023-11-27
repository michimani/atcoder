#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N = 0;
  cin >> N;

  unsigned long long ans = 0;
  int ab = 0, cd = 0;
  for (ab = 1; ab < N; ab++)
  {
    cd = N - ab;
    unsigned long long ab_pairs = 0;
    for (int a = 1; a < sqrt(ab); a++)
    {
      if (ab % a == 0)
      {
        ab_pairs++;
      }
    }
    ab_pairs *= 2;
    if (int(sqrt(ab)) * int(sqrt(ab)) == ab)
    {
      ab_pairs++;
    }

    unsigned long long cd_pairs = 0;
    for (int c = 1; c < sqrt(cd); c++)
    {
      if (cd % c == 0)
      {
        cd_pairs++;
      }
    }
    cd_pairs *= 2;
    if (int(sqrt(cd)) * int(sqrt(cd)) == cd)
    {
      cd_pairs++;
    }

    ans += ab_pairs * cd_pairs;
  }

  cout << ans << endl;
}