#include <iostream>
#include <cmath>
#include <map>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
  if (a % b == 0)
  {
    return b;
  }
  else
  {
    return gcd(b, a % b);
  }
}

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
  return a * b / gcd(a, b);
}

int main()
{
  unsigned long long A, B, C, D;
  cin >> A >> B >> C >> D;

  unsigned long long ans = B - A + 1;

  unsigned long long dc = B / C - (A - 1) / C;
  unsigned long long dd = B / D - (A - 1) / D;

  // duplications
  unsigned long long cd_lcm = lcm(C, D);

  unsigned long long dup = 0;
  if (cd_lcm <= B)
  {
    dup = B / cd_lcm - (A - 1) / cd_lcm;
  }

  ans -= (dc + dd - dup);

  cout << ans << endl;
  return 0;
}