#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
  ull a, b, k;
  cin >> a >> b >> k;

  ull n = 0;
  while (a < b)
  {
    a *= k;
    n++;
  }

  cout << n << endl;

  return 0;
}