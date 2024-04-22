#include <iostream>
#include <map>
#include <cmath>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ull n;
  cin >> n;

  ull amx = sqrt(n);
  map<ull, bool> c;

  for (ull a = amx; a > 1; a--)
  {
    ull b = 2;
    while (true)
    {
      ull ab = pow(a, b);
      if (ab > n)
        break;

      c[ab] = true;
      b++;
    }
  }

  cout << n - ull(c.size()) << endl;
  return 0;
}