#include <iostream>

using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b)
{
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

ull lcm(ull a, ull b)
{
  ull hcf = gcd(a, b);
  return (a * b) / hcf;
}

int main()
{
  ull a, b;
  cin >> a >> b;

  cout << lcm(a, b) << endl;
  return 0;
}