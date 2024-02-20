#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

bool is_prime(ull x)
{
  for (ull i = 2; i <= sqrt(x); i++)
    if (x % i == 0)
      return false;

  return true;
}

bool is_like_prime(ull x)
{
  if (x == 1)
    return false;

  if (is_prime(x))
    return true;

  string strx = to_string(x);
  if ((strx[strx.size() - 1] - '0') % 2 == 0 || strx[strx.size() - 1] == '5')
    return false;

  ull sum = 0;
  for (auto c : strx)
    sum += ull(c - '0');

  return sum % 3 != 0;
}

int main()
{
  ull n;
  cin >> n;

  cout << (is_like_prime(n) ? "Prime" : "Not Prime") << endl;
  return 0;
}