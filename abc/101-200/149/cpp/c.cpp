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

int main()
{
  ull x;
  cin >> x;

  while (true)
  {
    if (is_prime(x))
      break;

    x++;
  }

  cout << x << endl;
  return 0;
}